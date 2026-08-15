#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_uppercase(char c) {
    return isupper(c);
}

int is_acronym(const char* word) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (!is_uppercase(word[i])) {
            return 0;
        }
    }
    return 1;
}

void to_title_case(char* str) {
    char temp_str[strlen(str) + 1];
    int temp_index = 0;
    
    char* word_start = str;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '\0';
            
            if (is_acronym(word_start)) {
                strcpy(&temp_str[temp_index], word_start);
                temp_index += strlen(word_start);
            } else {
                if (word_start[0] != '\0') {
                    temp_str[temp_index++] = toupper(word_start[0]);
                    for (int j = 1; word_start[j] != '\0'; j++) {
                        temp_str[temp_index++] = tolower(word_start[j]);
                    }
                }
            }
            
            temp_str[temp_index++] = ' ';
            word_start = &str[i + 1];
        }
    }
    
    if (is_acronym(word_start)) {
        strcpy(&temp_str[temp_index], word_start);
    } else {
        if (word_start[0] != '\0') {
            temp_str[temp_index++] = toupper(word_start[0]);
            for (int j = 1; word_start[j] != '\0'; j++) {
                temp_str[temp_index++] = tolower(word_start[j]);
            }
        }
    }
    
    temp_str[temp_index] = '\0';
    
    strcpy(str, temp_str);
}

int main() {
    int num_lines;
    scanf("%d", &num_lines);
    
    getchar();
    
    char line[1000];
    for (int i = 0; i < num_lines; i++) {
        fgets(line, sizeof(line), stdin);
        
        line[strcspn(line, "\n")] = '\0';
        
        to_title_case(line);
        printf("%s\n", line);
    }
    
    return 0;
}
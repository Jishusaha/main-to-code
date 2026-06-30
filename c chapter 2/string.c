#include <stdio.h>
#include <conio.h>

int main() {
    char ch;

    printf("Type any character");
    ch = getch();  // No echo

    printf("\nType any character: ");
    ch = getche();  // Echoes the character typed

    printf("\nType any character: ");
    ch = getchar();  // Requires pressing Enter

    return 0;
}

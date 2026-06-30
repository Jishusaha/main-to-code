#include<stdio.h>
int main()
{
char *ptr = "COMPUTER";
int length=0;
printf("%s\n",ptr);
puts(ptr);
while(*ptr!='\0')
{
	printf("Value stored at Location %u is %c\n", ptr, *ptr);
length++;
	ptr++;
}
printf("The Length of the string is = %d\n ", length);
}
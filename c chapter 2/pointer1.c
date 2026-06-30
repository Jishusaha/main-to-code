#include<stdio.h>
int main()
{
char str[] = "COMPUTER";
char *ptr;

ptr=&str[0];			//  ptr=str;
while(*ptr!='\0')	
{
	printf("%c ", *ptr);
	ptr++;
}
return 0;
}

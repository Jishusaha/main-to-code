#include<stdio.h>
int main()
{
char str[] = "COMPUTER";
char *ptr;
int i=0;

ptr=&str[0];		//  ptr=str;
while(*(ptr+i)!= '\0')
{
	printf("%c", *(ptr+i));
	i++;
}
return 0;
}


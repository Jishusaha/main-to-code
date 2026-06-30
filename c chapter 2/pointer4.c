#include<stdio.h>
int main()
{
char *ptr;
ptr="COMPUTER";   // ptr=&"COMPUTER"[0];
while(*ptr!='\0')
{
printf("%c",*ptr);
ptr++;
}
return 0;
}





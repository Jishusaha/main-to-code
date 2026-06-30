#include<stdio.h>
int main()
{
char *ptr = "COMPUTER";	//   char *ptr = &“COMPUTER”[0]
while(*ptr!='\0')
{
printf("%c",*ptr);
ptr++;
}
return 0;
}





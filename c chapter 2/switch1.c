#include<stdio.h>
int main()
{
    int A,B;
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    printf("Enter the 1st number:");
    scanf("%d",&A);
    printf("Enter the 2nd number:");
    scanf("%d",&B);
    switch(ch)
    {
    case '+':
    printf("The addition is:%d",A+B);
    break;
    case '-':
    printf("The substraction is:%d",A-B);
    break;
    case '*':
    printf("The multiplication is:%d",A*B);
    break;
    case '/':
    printf("The division is:%d",A/B);
    break;
    default:
    printf("Wrong input");
    break;
    return 0;
    }
}
#include<stdio.h>
void main()
{
     char ch;
    printf("\nEnter the a alphabet\n");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
    {
        printf("%c is a alphabet",ch);
    }
    else if(ch>='1'&&ch<='9')
    {
        printf("%c is a digit",ch);
    }
    else
    {
        printf("%c is a special character",ch);
    }
}

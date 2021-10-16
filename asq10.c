#include<stdio.h>
void main()
{
    char ch;
    printf("\nEnter a alphabet\n");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        printf("%c is a lower case alphabet",ch);
    }
    else if(ch>='A'&&ch<='Z')
    {
        printf("%c is a upper case alphabet",ch);
    }
    else
    {
        printf("\n INCORECT INPUT");
    }
}

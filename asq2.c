#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d is positive",a);
    }
    else if(a<0)
    {
        printf("%d is negative",a);
    }
    else
    {
        printf("%d is zero",a);
    }
}

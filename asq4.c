#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a%5==0||a%11==0)
    {
        printf("%d is divisible by 5 ",a);
    }
    else if(a%11==0)
    {
        printf("%d is divisible by 11",a);
    }
    else
    {
        printf("The number neither divisible 5 nor by 11");
    }
}

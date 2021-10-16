#include<stdio.h>
void main()
{
    int a;
    printf("\nEnter a year to find weather it is a leap year or not\n");
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("%d it is a leap year",a);
    }
    else
    {
        printf("%d it is not a leap year",a);
    }
}

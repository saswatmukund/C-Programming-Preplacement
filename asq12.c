#include<stdio.h>
void main()
{
    int a;
    printf("\nEnter from the following\n 1.January\n 2.February\n 3.March\n 4.April\n 5.May\n 6.June\n 7.July\n 8.August\n 9.September\n 10.October\n 11.November\n 12.December\n");
    scanf("%d",&a);
    if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
    {
        printf("Number of days in this month is 31");
    }
    else if(a==4||a==6||a==9||a==11)
    {
        printf("Number of days in this month is 30");
    }
    else if(a==2)
    {
        printf("Number of days in this month can be 28 or 29 ");
    }
    else
    {
        printf("INCORRECT INPUT");
    }
}

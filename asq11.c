#include<stdio.h>
void main()
{
    int a;
    printf("\n Enter a number from the following 1.Monday\n 2.Tuesday\n 3.Wednesday\n 4.Thursday\n 5.Friday\n 6.Saturday\n 7.Sunday\n");
    scanf("%d",&a);
    if(a==1)
    {
        printf("\nMonday");
    }
    else if(a==2)
    {
        printf("\nTuesday");
    }
    else if(a==3)
    {
        printf("\n Wednesday");
    }
    else if(a==4)
    {
        printf("\n Thursday");
    }
    else if(a==5)
    {
        printf("\n Friday");
    }
    else if(a==6)
    {
        printf("\n Saturday");
    }
    else if(a==7)
    {
        printf("\n Sunday");
    }
    else
    {
        printf("INCORRECT INPUT");
    }


}

#include<stdio.h>
void main()
{
    int i,j,sum=0,a[2][2];
    printf("Enter 4 numbers\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("sum is %d",sum);
}

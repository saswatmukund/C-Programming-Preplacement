// Transpose row and column
#include<stdio.h>
void main()
{
    int i,j,a[3][2],t[2][3];
     printf("Enter 6 numbers\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=1;j++)
        {
            t[i][j]=a[i][j];
        }
    }
    for(j=0;j<=1;j++)
    {
        for(i=0;i<=2;i++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
}

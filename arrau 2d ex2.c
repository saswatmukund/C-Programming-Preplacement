/*                       */
#include<stdio.h>
void main()
{
    int i,j,a[3][2];
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
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

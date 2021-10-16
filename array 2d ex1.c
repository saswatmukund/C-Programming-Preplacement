#include<stdio.h>
void main()
{
    int i,j,a[3][2]={5,3,2,6,8,7};
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

}

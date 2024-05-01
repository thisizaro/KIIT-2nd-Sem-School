#include<stdio.h>
int main()
{
    int n = 3;
    scanf("%d",&n);
    int a[n][n],b[n][n],x,sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("the value of the elements %d,%d",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("the value of the elements %d,%d",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
     int c[n][n];
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                x=a[i][k]*b[k][j];
                sum=sum+x;
            }
            c[i][j]=sum;
            printf("%4d",c[i][j]);
            sum=0;
        }
        printf("\n");
     }


return 0;
}
#include<stdio.h>
int main()
{
    int n,m,sum;
    scanf("%d %d",&n,&m);
    int  mat1[n][m];
    int mat2[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum=mat1[i][j] + mat2[i][j];
            printf("%d\t",sum);
        }
        printf("\n");
    }
    return 0;
}

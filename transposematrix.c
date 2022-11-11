#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);

    int mat[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d  ",mat[j][i]);
        }
        printf("\n");
    }
    return 0;
}

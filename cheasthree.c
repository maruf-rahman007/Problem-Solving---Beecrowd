#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j]=0;
        }
    }

    for(int i=1;i<=n;i++)
    {
        int r,c;
        scanf("%d %d",&r,&c);
        a[r-1][c-1]=1;
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]==0)
                printf("%d %d\n",i+1,j+1);
        }
    }

    return 0;
}

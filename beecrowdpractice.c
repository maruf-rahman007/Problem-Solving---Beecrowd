#include<stdio.h>
int main()
{
    int n;
    double mat[12][12];
    scanf("%d",&n);
    char ch[2];
    gets(ch);
    float sum=0.0;
    for(int i=0; i<12; i++)
    {
        for(int j=0; j<12; j++)
        {
            scanf("%lf",&mat[i][j]);
        }
    }
    for(i = 0; i < 12; i++)
    {
        sum += mat[i][n];
    }
    if(ch=='S')
        printf("%0.1lff\n",sum);
    else if(ch=='M')
        printf("%0.1lf\n",sum/12);
    return 0;
}

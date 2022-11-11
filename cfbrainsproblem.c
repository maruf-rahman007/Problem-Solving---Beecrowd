#include<stdio.h>
int main()
{
    int n,m,count=0,cnt=0;
    scanf("%d %d",&n,&m);
    char arr[m+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf(" %c",&arr[j]);
        }
        for(int j=0;j<m;j++)
        {
            if(arr[j]=='M' || arr[j]=='Y' ||arr[j]=='C')
            {
                cnt++;
            }
            else
            {
                count++;
            }
        }

    }
    if(count==n*m)
    {
        printf("#Black&White");
    }
    else if(cnt>0)
    {
        printf("#Color");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        int count=0;
        for(int j=1;j<=n;j++)
        {
            if(n%j==0)
                count++;
        }
        if(count==2)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
    return 0;
}

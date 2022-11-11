#include<stdio.h>
int main()
{
    int n,m;

    while(1)
    {
        scanf("%d %d",&n,&m);
        int num[m];
        for(int i=0; i<m; i++)
        {
            scanf("%d",&num[i]);

        }
        int count=0;

        for(int i=0;i<m;i++)
        {
            int cnt=0;
            for(int j=i+1;j<m;j++)
            {
                if(num[i]==num[j] && num[i]!=0 && num[j]!=0)
            {
                cnt++;
                num[j]=0;
            }
            }
            if(cnt>0)
                count++;
        }

        if(n!=0 && m!=0)
        {
            printf("%d\n",count);
        }

        else if(m==0 && n==0)
        {
            break;
        }
    }
return 0;
}


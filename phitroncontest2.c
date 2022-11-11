#include<stdio.h>
int main()
{
    int N,K,count=0;
    scanf("%d %d",&N,&K);

    for(int i=1;i<=N;i++)
    {
        int a;
        scanf("%d",&a);
        if(a<10)
            count++;
    }
    printf("%d\n",count);
    return 0;
}

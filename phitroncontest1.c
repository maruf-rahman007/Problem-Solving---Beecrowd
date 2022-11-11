#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);

    for(int i=1;i<=T;i++)
    {
        long long int S,A,B,C,d;
        scanf("%lld %lld %lld %lld",&S,&A,&B,&C);
        d=S-(A+B+C);
        printf("%lld",d);
    }
    return 0;
}

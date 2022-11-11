#include<stdio.h>

int fibonacchi(int num)
{
    if(num<=1)
    {
        return num;
    }
    return fibonacchi(num-2)+fibonacchi(num-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int m=fibonacchi(i);
        printf("%d ",m);
    }

    return 0;
}

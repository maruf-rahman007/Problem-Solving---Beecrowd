#include<stdio.h>
int main()
{
    long long int n,count=0;
    scanf("%lld",&n);
    long long int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(int i=0,j=i+1;i<n,j<n;i++,j++)
    {
        if(arr[i]>arr[j])
        {
            count=count+(arr[i]-arr[j]);
            arr[j]=arr[i];
        }
    }
    printf("%lld\n",count);
    return 0;
}

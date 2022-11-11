#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    if(k!=0)
    {
        for(int j=k;j<n;j++)
        {
            printf("%d ",arr[j]);
        }
        for(int x=0;x<k;x++)
        {
            printf("%d ",arr[x]);
        }
    }
    else{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    }
    return 0;
}

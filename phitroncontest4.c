#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    int max=0;
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
            max=arr[i];
    }
    for(int i=0;i<N;i++)
    {
        if(arr[i]<max)
            printf("%d ",max-arr[i]);
        else
            printf("0");
    }

    return 0;
}

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int arr1[a];
    int x;
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<a;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(arr1[i]<arr1[j])
            {
                int temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }

    for(int i=0;i<a;i++)
    {
        printf("%d   ",arr1[i]);
    }
    printf("\n");

    for(int i=0;i<b;i++)
    {
        scanf("%d",&x);
        printf("%d\n",arr1[x-1]);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int x;
        char ch;
        scanf("%d%c",&x,&ch);
        int t=0;
        if(x<60)
        {
            t=((60-x)*1)+100;
            printf("%d minutes\n",t);
        }
        else if(x>=60 && x<=80)
        {
            t=((80-x)*2)+60;
            printf("%d minutes\n",t);
        }
        else if(x>=80)
        {
            t=(100-x)*3;
            printf("%d minutes\n",t);
        }
    }

    return 0;
}

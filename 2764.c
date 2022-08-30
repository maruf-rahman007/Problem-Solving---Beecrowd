#include<stdio.h>
int main()
{
    int day ,month,year;
    char ch;
    scanf("%d%c%d%c%d",&day,&ch,&month,&ch,&year);
    printf("%0.2d/%0.2d/%0.2d\n",month,day,year);
    printf("%0.2d/%0.2d/%0.2d\n",year,month,day);
    printf("%0.2d-%0.2d-%0.2d\n",day,month,year);
    return 0 ;
}
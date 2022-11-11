#include<stdio.h>
int main()
{
    char str[30];
    gets(str);
    char str2[30];

    int len=strlen(str);

   /* int j=len-1, i=0,count =0;

    while(i<=len-1)
    {
        str2[i]=str[j];
        i++;
        j--;
    }*/
    int c=strcmp(str ,strrev(str));
    if(c==0)
        printf("Pelindrom\n");
    else
        printf("Not Pelindrom\n");
    return 0;
}

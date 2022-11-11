#include<stdio.h>
int main()
{
    int v=0,c=0;
    char str[1000];
    fgets(str,sizeof(str),stdin);

    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            {
                v++;
            }
            else
                c++;
        }
    }
    printf("Vowel - %d\n",v);
    printf("Consonent - %d\n",c);
    return 0;
}

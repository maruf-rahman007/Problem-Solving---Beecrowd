#include<stdio.h>
int main()
{
    char str[] = "bbbbaccddd";
    int n=strlen(str),largestelement=26;
    int freq[largestelement+1];
    for(int i=0;i<=largestelement;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        freq[(str[i]-'a')+1]++;
    }
    int count;
    for(int i=1;i<=26;i++)
    {
        if(freq[i]>0)
            count++;
    }
    int nxt=0;
    while(nxt!=count)
    {
        int max=-1,index=-1;
        char ch;
        for(int i=1;i<=26;i++)
        {
            if(freq[i]>max)
            {
                max=freq[i];
                ch=i+96;
                index=i;
            }
        }
        for(int i=1;i<=max;i++)
        {
            printf("%c",ch);
        }
        freq[index]=0;
        nxt++;
    }
    return 0;
}


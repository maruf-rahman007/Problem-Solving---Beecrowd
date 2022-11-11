#include<stdio.h>
int main()
{
    int mat[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int sum=mat[0][0]+mat[1][1]+mat[2][2];
    int s=0,cnt=0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            s+=mat[i][j];
        }
        if(s==sum)
        {
            cnt++;
            s=0;
            continue;
        }
        else
        {
            printf("NO\n");
            break;
        }
    }
    int a,c;
    a=0;
    c=0;
    if(cnt==3)
    {

        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                a+=mat[j][i];
            }
            if(a==sum)
            {
                c++;
                a=0;
                continue;
            }
            else
            {
                printf("NO\n");
                break;
            }
        }
    }
    if(cnt==3 && c==3)
    {
        int sum1=mat[0][2]+mat[1][1]+mat[2][0];
        if(sum1==sum)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

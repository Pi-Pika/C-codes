#include <stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    char s[n],o[n];
    scanf("%s",&s);

    for(int i=1; i<n; i++)
    {
        if(s[i]==s[i-1])
        {
            printf("Yes\n%d %d\n",i,i+1);
            c++;
            break;
        }

    }
    if(c==0)
    {
        for(int i=2; i<n; i++)
        {
            if(s[i]==s[i-2])
            {
                printf("Yes\n%d %d\n",i-1,i+1);
                c++;
                break;

            }


        }

    }
    if(c==0)
        printf("No\n");
}

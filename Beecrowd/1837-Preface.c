#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,ans,i;
    scanf("%d %d",&a,&b);
    if(a<0)
    {
        e=b;
        if(b<0)
        {
            e=b*-1;
        }
        for(i=0; i<e; i++)
        {
            f=a-i;
            if(f%b==0)
            {
                break;
            }
        }
        ans=f/b;
    }
    else
    {
        ans=a/b;
        i=a%b;
    }
    printf("%d %d\n",ans,i);
    return 0;
}

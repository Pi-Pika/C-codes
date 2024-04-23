#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()

{
    int n,x,y,z,i,j,k;
    int c1=0,c2=0;
    scanf("%d",&n);
    while(n--)
    {
        c1=c2=0;
        scanf("%d",&k);
        for (i=0;i<(k*2) ;i++ )
            {
                scanf("%d",&x);
                if (x%2!=0)
                {
                    c1++;
                    //printf("%d bal1\n",c1);
                }else
                {
                    c2++;
                    //printf("%d bal2\n",c2);
                }
            }
            if (c1==c2)
                {
                    printf("YES\n");
                }else
                {
                    printf("NO\n");
                }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,count=0,x,y,z,i,j,k;
    char a[10000],b[100000];
    scanf("%d",&tc);

    while (tc--)
        {
            char c[150]={0};
            int flag=0;
            count=0;
            scanf("%d %d",&x,&y);
            scanf("%s %s",a,b);

            for (i=0;i<x;i++ )
                {
                    c[a[i]]+=1;
                }
            for (i=0;i<y;i++ )
                {
                    c[b[i]]+=1;
                }
            for (i=96;i<126;i++ )
                {
                    if(c[i]%2!=0) count++;
                    if (count==2)
                    {
                        flag=1;
                        break;
                    }
                }
            if (flag==1) printf("NO\n");
            else printf("YES\n");
        }

    return 0;
}

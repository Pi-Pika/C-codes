#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,count,x,y,z,i,j,k;
    char a[10000],b[100000],c[100000];
    scanf("%d",&tc);
    for (int i=1;i<=tc;i++)
        {
            count=0;
            scanf("%d %d",&x,&y);
            n=abs(x-y);
            count=n*4;
            count=count+(x*4);
            count=count+19;
            printf("Case %d: %d\n",i,count);
        }
    return 0;
}

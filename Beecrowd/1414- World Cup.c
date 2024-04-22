#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,count,x,y,z,i,j,k;
    char a[10000],b[100000],c[100000];
    while(1)
    {
        count=0;
        scanf("%d %d",&tc,&n);
        if (tc==0) return 0;
        for (int i=0;i<tc;i++ )
            {
                scanf("%s %d",a,&x);
                count+=x;
            }
        y=(n*3)-count;
        printf("%d\n",y);
    }
}

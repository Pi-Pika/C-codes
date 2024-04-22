#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int n,x,j,k;
    while(1)
    {
        int a[10000]={0},min=101,max=0,ans=0;
        scanf("%d %d",&n,&k);
        if(n==0 && k==0) return 0;
        for (int i=0;i<n;i++ )
            {
                scanf("%d",&x);
                a[x]++;
                if(x>max) max=x;
                if(x<min) min=x;
            }
        for (int i=min;i<=max;i++ )
            {
                if(a[i]>=k) ans++;
            }
        printf("%d\n",ans);
    }
}

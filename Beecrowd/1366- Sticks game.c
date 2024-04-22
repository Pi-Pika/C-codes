#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int n,x,y,i;
    while(1)
    {
        int a[1050]={0},count=0;
        scanf("%d",&n);
        if(n==0) return 0;
        for (i=1;i<=n;i++ )
            {
                scanf("%d %d",&x,&y);
                if(y%2==0) count+=y;
                else count+=(y-1);
            }
        printf("%d\n",count/4);
    }
}

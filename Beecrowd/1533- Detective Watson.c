#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,pos,x;
    while (1)
        {
            int max=0,max2=0,a[2000]={0};
            scanf("%d",&n);
            if(n==0) break;
            for (int i=1;i<=n;i++ )
                {
                    scanf("%d",&a[i]);
                    if(a[i]>max) max=a[i];
                }
            for (int i=1;i<=n;i++)
                {
                    if(a[i]>max2 && a[i]!=max)
                    {
                        pos=i;
                    }
                }
            printf("%d\n",pos);
        }

    return 0;
}

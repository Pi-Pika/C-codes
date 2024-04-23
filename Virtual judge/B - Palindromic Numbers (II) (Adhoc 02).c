#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,count,x,y,z,i,j,k;
    char a[10000],b[100000],c[100000];
    scanf("%d",&tc);
    for (int i=1;i<=tc;i++ )
        {
            scanf("%s",a);
            n=strlen(a);
            if(n>=1){
                count=0;
                for (int k=0;k<n/2;k++ )
                    {
                        if(a[k]!=a[n-k-1])
                        {
                            count=1;
                            break;

                        }
                    }
            }
            else count=0;

            if(count==0) printf("Case %d: Yes\n",i);
            else printf("Case %d: No\n",i);
        }
    return 0;
}

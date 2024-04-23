#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    long long int tc,y,z,i,j;
    scanf("%lld",&tc);
    while (tc--)
        {
            long long int x,count=0,n,k;
            scanf("%lld %lld",&n,&k);
            long long int a[10000][10000]={0};
            for (i=0;i<n;i++ )
                {
                    for (j=0;j<n;j++ )
                        {
                            scanf("%lld",&a[i][j]);
                        }
                }
            for (i=0;i<n;i++ )
                {
                    for (j=0;j<n;j++ )
                        {
                            if(a[i][j]!=a[n-i-1][n-j-1]) count++;
                        }
                }
            if(count<=k) printf("Yes\n");
            else printf("No\n");
        }
    return 0;
}

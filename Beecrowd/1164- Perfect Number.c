#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,x,y,z,j,k;
    scanf("%d",&tc);
    while (tc--)
        {
            long long n;
            scanf("%lld",&n);
            long long count=0;
            for (int i=1;i<n;i++ )
                {
                    if(n%i==0) count=count+i;
                    if(count>n) break;
                }
            if(count==n) printf("%d eh perfeito\n",n);
            else printf("%d nao eh perfeito\n",n);
        }
    return 0;
}

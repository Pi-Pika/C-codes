#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    long long int tc,n,count=0,x,y,z,i,j,k;
    while (scanf("%lld",&n)!=EOF)
    {
        count=0;
        for (i=0;i<=sqrt(n);i++ )
            {
                for (j=0;j<=sqrt(n);j++ )
                    {
                        z=(i*i)+(j*j);
                        if(n==z)
                        {
                            count=1;
                            break;
                        }
                    }
            }
            if (count==1) printf("YES\n");
            else printf("NO\n");
    }
    return 0;
}

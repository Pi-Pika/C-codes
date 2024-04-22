#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    long long int tc,n,x,y,z,i,j,k;
    char a[10000],b[100000],c[100000];
    scanf("%lld",&tc);
    while (tc--)
        {
            int c=0;
            scanf("%lld",&n);
            if(n==0) c=1;
            if(n==1) c==0;
            for (int i=2;i<sqrt(n);i++ )
                {
                    if(n%i==0)
                    {
                        c=1;
                        break;
                    }
                }
            if(c==1) printf("Not Prime\n");
            else printf("Prime\n");
        }
    return 0;
}

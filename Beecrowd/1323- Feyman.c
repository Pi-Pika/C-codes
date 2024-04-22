#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    long long int tc,n,count=0,x,y,z,i,j,k;
    char a[10000],b[100000],c[100000];
    while (1)
        {
            scanf("%lld",&n);
            if(n==0) return 0;
            printf("%lld\n",(n*(n+1)*(2*n+1))/6);
        }
}

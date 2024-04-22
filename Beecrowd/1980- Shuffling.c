#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    long long int tc,n,count,x,y,z,i,j,k;
    char a[10000],b[100000],c[100000];
    while(1)
    {
        count=1;
        scanf("%s",a);
        if(a[0]=='0') return 0;
        n=strlen(a);
        for (int i=n;i>0;i-- )
            {
                count*=i;
            }
        printf("%lld\n",count);
    }
}

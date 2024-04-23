#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()

{
    long long int n,x,y,z,i,j,k,count=0;
    int a[1000],b[1000];
    scanf("%lld",&n);
    while(n)
    {
        k=n%10;
        if(k==7 || k==4)
        {
            count++;
        }
        n=n/10;
    }
    if(count==4 || count==7)
    {
        printf("YES\n");
    }else
    {
        printf("NO\n");
    }
    return 0;
}


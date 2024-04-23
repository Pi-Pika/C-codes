#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()

{
    long long int n,x,y,z,i,j,k,count=0,left;
    scanf("%lld",&n);
        count=n/100;
        left=n%100;

        count+=left/20;
        left=left%20;

        count+=left/10;
        left=left%10;

        count+=left/5;
        left=left%5;

        count+=left/1;

    printf("%lld\n",count);
    return 0;
}

#include<stdio.h>

int main()

{
    long long int a,b,i,sum=0;
    scanf("%lld %lld",&a,&b);
    for(i=a;i<=b;i++){
        sum=sum+i;
    }
    printf("%lld",sum);
    return 0;
}

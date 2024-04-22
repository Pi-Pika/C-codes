#include<stdio.h>

int main()

{
    long long int d,m,y;
    scanf("%lld/%lld/%lld",&d,&m,&y);
    printf("%02lld/%02lld/%02lld\n",m,d,y);
    printf("%02lld/%02lld/%02lld\n",y,m,d);
    printf("%02lld-%02lld-%02lld\n",d,m,y);
    return 0;
}

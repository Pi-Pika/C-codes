#include<stdio.h>

int main()

{
    long long int x,y,z,d;
    scanf("%lld.%lld.%lld-%lld",&x,&y,&z,&d);
	printf("%03lld\n%03lld\n%03lld\n%02lld\n",x,y,z,d);
    return 0;
}

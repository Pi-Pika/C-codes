#include<stdio.h>


int main()

{
    double volume,n,pi;
    pi=3.14159;
    scanf("%lf",&n);
    volume=(4.0/3.0)*pi*n*n*n;
    printf("VOLUME = %.3lf\n",volume);
    return 0;
}

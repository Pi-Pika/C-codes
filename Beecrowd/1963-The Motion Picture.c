#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	double a,b,c=0.00,d=0.00,j,k,l,n,m,temp;

    scanf("%lf %lf",&a,&b);
    c=(b-a);
    d=((c*100.00)/a);

    printf("%.2lf%%\n",d);

    return 0;
}

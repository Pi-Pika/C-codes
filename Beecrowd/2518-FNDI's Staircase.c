#include<stdio.h>
#include<math.h>

int main()
{
    double n,h,c,l,sum=0,sum1=0;
    while(scanf("%lf",&n)!=EOF)
    {
    scanf("%lf %lf %lf",&h,&c,&l);
    sum1=sqrt((h*h)+(c*c))*l;
    sum=(sum1*n)/(10000.00);
    printf("%.4lf\n",sum);
    }
    return 0;
}

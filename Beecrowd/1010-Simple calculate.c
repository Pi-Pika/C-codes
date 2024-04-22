#include<stdio.h>

int main()

{
    int a,b,a1,b1;
    double c,c1,m;
    scanf("%d %d %lf",&a,&b,&c);
    scanf("%d %d %lf",&a1,&b1,&c1);
    printf("VALOR A PAGAR: R$ %.2lf\n",(b*c)+(b1*c1));
    return 0;
}

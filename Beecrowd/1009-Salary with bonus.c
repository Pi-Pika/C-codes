#include<stdio.h>


int main()

{
    int a,b,a1,b1;
    double c,c1,m;
    char ch[100];
    scanf("%s",ch);
    scanf("%lf %lf",&m,&c);
    printf("TOTAL = R$ %.2lf\n",m+(c*0.15));
    return 0;
}

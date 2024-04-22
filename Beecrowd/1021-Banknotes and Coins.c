#include <stdio.h>

int main()

{
    double a,r;
    int b,c,d,e,f,g,h,i,j,k,l,m;
    scanf("%lf",&a);

    printf("NOTAS:\n");
    b=(a/100);
    printf("%d nota(s) de R$ 100.00\n",b);

    r=a-(b*100);
    c=r/50;
    printf("%d nota(s) de R$ 50.00\n",c);

    r=r-(c*50);
    d=r/20;
    printf("%d nota(s) de R$ 20.00\n",d);

    r=r-(d*20);
    e=r/10;
    printf("%d nota(s) de R$ 10.00\n",e);

    r=r-(e*10);
    f=r/5;
    printf("%d nota(s) de R$ 5.00\n",f);

    r=r-(f*5);
    g=r/2;
    printf("%d nota(s) de R$ 2.00\n",g);


    printf("Moedas:\n");

    r=r-(g*2);
    h=r/1;
    printf("%d moeda(s) de R$ 1.00\n",h);

    r=r-(h*1);
    i=r/0.50;
    printf("%d moeda(s) de R$ 0.50\n",i);

    r=r-(i*0.50);
    j=r/0.25;
    printf("%d moeda(s) de R$ 0.25\n",j);

    r=r-(j*0.25);
    k=r/0.10;
    printf("%d moeda(s) de R$ 0.10\n",k);

    r=r-(k*0.10);
    l=r/0.05;
    printf("%d moeda(s) de R$ 0.05\n",l);

    r=r-(l*0.05);
    m=r/0.01;
    printf("%d moeda(s) de R$ 0.01\n",m);

    return 0;
}

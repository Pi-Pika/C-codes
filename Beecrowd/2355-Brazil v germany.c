#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    unsigned int  n;
    int a,x,y,z,i,j,k;
    //char a[],b[],c[];
    while (scanf("%lu",&n), n!= 0)
    {
        double bra=0.00,ger=0.00;
        bra=floor((n/90.0)*1);
        ger=ceil((n/90.0)*7);
        printf("Brasil %.0lf x Alemanha %0.lf\n",bra,ger);
    }

    return 0;
}

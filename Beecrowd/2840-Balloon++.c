#include<stdio.h>
#include<math.h>

int main()
{
    int r,l;
    double pi = 3.1415,v;
    scanf("%d %d",&r,&l);
    v = (4*pi*r*r*r)/3;
    printf("%.f\n",floor(l/v));
    return 0;
}

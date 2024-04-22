#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    while(1)
    {
        int d,p,q,re;
        scanf("%d",&q);
        if(q==0) break;
        scanf("%d %d",&d,&p);
        re = ((double)(q*d) / -(q-p) *p);
        if(re!=1) printf("%d paginas\n",re);
        else printf("%d pagina\n",re);
    }
    return 0;
}

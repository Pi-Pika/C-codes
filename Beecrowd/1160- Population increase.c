#include<stdio.h>

int main()
{
    int pa,pb,tc,n,p,d,q,e;
    float g1,g2;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d %d %f %f",&pa,&pb,&g1,&g2);
        d=pa;
        e=pb;
        n=0;
        while(p<=q)
        {
            p=d+d*(g1/100);
            q=e+e*(g2/100);
            d=p;
            e=q;
            n++;
            if(n>100) break;
        }
        if(n>100) printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n",n);
        p=0;
        q=0;
    }
    return 0;
}

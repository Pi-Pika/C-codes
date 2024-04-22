#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()

{
    int e,g,h,f,x1,y1,x2,y2,m1,m2;
    //char a[],b[],c[];
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

    if(x1<y1)
    {
        e=x1;
    }else if (y1<x1)
    {
        e=y1;
    }

    if(x2<y2)
    {
        f=x2;
    }else if (y2<x2)
    {
        f=y2;
    }
    e=e+f;

    if(x1>y1)
    {
        m1=x1;
    }else if (y1>x1)
    {
        m1=y1;
    }
    if(x2>y2)
    {
        m2=x2;
    }else if (y2>x2)
    {
        m2=y2;
    }

    if(m1<m2)
    {
        g=m1;
    }else if (m2<m1)
    {
        g=m2;
    }

    if(e<g)
    {
        h=e;
    }else if (g<e)
    {
        h=g;
    }
    printf("%d\n",h*h);
    return 0;
}

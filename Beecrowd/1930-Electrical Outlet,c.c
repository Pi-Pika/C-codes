#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()

{
    int e,g,h,f,x1,y1,x2,y2,m1,m2,sum=0;
    //char a[],b[],c[];
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

    sum=x1+y1+x2+y2;
    printf("%d\n",sum-3);
    return 0;
}

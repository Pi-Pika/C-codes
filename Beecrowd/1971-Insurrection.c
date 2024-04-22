
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,c1=0,c2=0,c3=0,c4=0,c11,c12,c21,c22,c31,c32,c41,c42,t1,t2;
    scanf("%d %d %d %d %d %d %d %d %d %d",&c11,&c12,&c21,&c22,&c31,&c32,&c41,&c42,&t1,&t2);

    if((t1>c11 && t2>c12) || (t1>c21 && t2>c22) || (t1>c31 && t2>c32) || (t1>c41 && t2>c42)) c1++;
    if((t1>c11 && t2<c12) || (t1>c21 && t2<c22) || (t1>c31 && t2<c32) || (t1>c41 && t2<c42)) c2++;
    if((t1<c11 && t2>c12) || (t1<c21 && t2>c22) || (t1<c31 && t2>c32) || (t1<c41 && t2>c42)) c3++;
    if((t1<c11 && t2<c12) || (t1<c21 && t2<c22) || (t1<c31 && t2<c32) || (t1<c41 && t2<c42)) c4++;

    if(c1==1 && c2==1 && c3==1 && c4==1)
    {
        printf("\\O/\n");
        printf(" | \n");
        printf("/ \\\n");
    }else
    {
        printf(" O>\n");
        printf("<| \n");
        printf("/ >\n");
    }
    return 0;
}

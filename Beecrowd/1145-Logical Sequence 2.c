#include<stdio.h>

int main()

{
    int x,y,k,l,m=1;
    scanf("%d %d",&x,&y);

    k=y/x;
    l=x;

    for (int i=0;i<k;i++){
        printf("%d",m);
        for (int j=m+1;j<=l;j++){
        printf(" %d",j);
        }
        printf("\n");
        m+=x;
        l+=x;
    }
    printf("");
    return 0;
}

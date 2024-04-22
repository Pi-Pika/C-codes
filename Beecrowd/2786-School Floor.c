#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()

{
    int n,a,x,y,z,i,j=0,k=0;
    //char a[],b[],c[];
    scanf("%d %d",&x,&y);

    j=(x*y)+((x-1)*(y-1));
    k=2*((x-1)+(y-1));

    printf("%d\n%d\n",j,k);
    return 0;
}

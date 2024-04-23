#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()

{
    int n,a,x,y,z,i,j,k;
    //char a[],b[],c[];
    scanf("%d",&n);

    for (i=0;i<n;i++)
        {
            scanf("%d %d",&x,&y);
            printf("%d\n",x+y);
        }

    return 0;
}

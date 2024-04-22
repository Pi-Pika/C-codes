#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()

{
    int n,a,x,y,z,i,j=0,k=0;
    //char a[],b[],c[];
    scanf("%d",&n);
    for (i=0;i<n ;i++ )
        {
            scanf("%d",&a);
            k+=a%3;
            j+=a;
        }
    printf("%d\n",j-k);
    return 0;
}

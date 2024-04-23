#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()

{
    int n,x,y,z,i,j,k;
    char a[7];
    scanf("%d",&n);
    while(n--)
    {
        x=0;
        y=0;
        scanf("%s",&a);
        x=a[0]+a[1]+a[2];
        y=a[3]+a[4]+a[5];
        if (x==y)
        {
            printf("YES\n");
        }else
        {
            printf("NO\n");
        }
    }
    return 0;
}

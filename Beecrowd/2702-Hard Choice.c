#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int n,a,x,y,z,x1,y1,z1,sum=0;
    //char a[],b[],c[];
    scanf("%d %d %d",&x,&y,&z);
    scanf("%d %d %d",&x1,&y1,&z1);

    if (x1>x)
    {
        sum+=(x1-x);
    } if (y1>y)
    {
        sum+=(y1-y);
    } if (z1>z)
    {
        sum+=(z1-z);
    }

    printf("%d\n",sum);
    return 0;
}


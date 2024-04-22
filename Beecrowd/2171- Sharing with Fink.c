#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int n, i;
    while(1)
    {
        scanf("%d",&n);
        if (n==0) break;
        i = 0;
        for(int j=1;i+j<=n;j++)
        {
            i=i+j;
        }
        printf("%d %d\n",i,n-i);
    }
    return 0;
}

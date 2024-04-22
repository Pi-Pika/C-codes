#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int n,i,x,j=0,a[111]={0},b[111]={0};
    scanf("%d",&n);

    for (i=1;i<=n;i++ )
        {
            scanf("%d",&a[i]);
            if(a[i]<a[i-1])
            {
                b[j]=i;
                j++;
            }
        }
    printf("%d\n",b[0]);
    return 0;
}

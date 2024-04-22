#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,count=0,x,y,z,i,j,k;
    int a[10000],b[100000],c[100000];
    scanf("%d %d",&tc,&n);
    for (int i=0;i<n;i++ )
        {
            scanf("%d",&a[i]);
        }
    for (int i=0;i<n-1;i++ )
        {
            if(abs(a[i]-a[i+1])>tc)
            {
                count=1;
                break;
            }
        }
    if(count==1) printf("GAME OVER\n");
    else printf("YOU WIN\n");
    return 0;
}

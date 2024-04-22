#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,count=0,x,y,z,i,j,k;
    int a[10020],b[100000]={0};
    a[0]=0,a[1]=1;

    scanf("%d",&n);

    for (int i=2;i<10000;i++ )
        {
            a[i]=a[i-1]+a[i-2];
        }
    j=0,k=5;
    for (int i=4;i<900000;i++ )
        {
            if(i==a[k]) k++;
            else
            {
                b[j]=i;
                j++;
            }
            if(j==n) break;
        }
    printf("%d\n",b[n-1]);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    long long int tc,n,count=0,x,y,z,i,j,k;
    int a[22][42]={0},b[100000],c[100000];
    a[1][21]=1;
    for (int i=2;i<22;i++ )
        {
            for (int j=0;j<42;j++ )
                {
                    a[i][j]=a[i-1][j-1]+a[i-1][j]+a[i-1][j+1];
                }
        }
//    for (int i=1;i<22;i++ )
//        {
//            for (int j=1;j<42;j++ )
//                {
//                    printf("%d ",a[i][j]);
//                }
//            printf("\n");
//        }
    scanf("%lld",&n);
    for (int i=1;i<42;i++ )
        {
            count=count+a[n+1][i];
        }
    printf("%lld\n",count);
    return 0;
}

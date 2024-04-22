#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,temp=0,x,y,z,j,k;
    int a[10000];
    scanf("%d",&tc);
    for (k=1;k<=tc;k++)
        {
            scanf("%d",&n);
            for (int i=0;i<n;i++ )
                {
                    scanf("%d",&a[i]);
                }
            for (int i=0;i<n-1;i++ )
                {
                    for (int j=i;j<n;j++ )
                        {
                            if(a[i]>a[j])
                            {
                                temp=a[j];
                                a[j]=a[i];
                                a[i]=temp;
                            }
                        }
                }
            printf("Case %d: %d\n",k,a[n/2]);
        }
    return 0;
}

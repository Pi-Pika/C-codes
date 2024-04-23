#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int tc,n,sum=0,sum2=0,x,y,z,i,j,k;
    int a[11];
    for (i=0;i<9;i++ )
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
    sum2=sum-100;
    for (i=0;i<8;i++ )
        {
            for (j=i+1;j<9;j++ )
                {
                    if (a[i]+a[j]==sum2)
                    {
                        a[i]=0;
                        a[j]=0;
                        break;
                    }
                }
        }
    for (i=0;i<9;i++ )
        {
            if(a[i]!=0)
            {
                printf("%d\n",a[i]);
            }
        }
    return 0;
}

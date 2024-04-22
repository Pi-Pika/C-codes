#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int a[100000],sum=0,c,i,j,k,l,n,m,temp;

    for (i=0;i<4;i++ )
        {
            scanf("%d",&a[i]);
        }
    for (i=0;i<4 ;i++ )
        {
            for (j=i;j<4-1;j++ )
                {
                    if (a[i]>a[j])
                        {
                            temp=a[i];
                            a[i]=a[j];
                            a[j]=temp;
                        }
                }
        }
    sum=abs(a[0]+a[3]-a[2]-a[1]);
    printf("%d\n",sum);
    return 0;
}

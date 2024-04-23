#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,a[300000],count,x,y,z,i,j,k,temp;
    scanf("%d",&tc);

    while (tc--)
        {
            count=0;
            scanf("%d",&n);
            for (int i=0;i<n;i++ )
                {
                    scanf("%d",&a[i]);
                    if(a[i]<1)
                    {
                        count++;
                    }
                }
            for (int i=0;i<n-1;i++ )
                {
                    for (int j=0;j<n-i-1;j++ )
                        {
                            if(a[j]>a[j+1])
                            {
                                temp=a[j];
                                a[j]=a[j+1];
                                a[j+1]=temp;
                            }
                        }
                }
            if(count%2==0)
            {
                for (int i=0;i<count;i++ )
                    {
                        a[i]=a[i]*(-1);
                    }
            }else
            {
                for (int i=0;i<count-1;i++ )
                    {
                        a[i]=a[i]*(-1);
                    }
                if(abs(a[count-1])>a[count] && count!=n)
                {
                    a[count-1]=(-1)*a[count-1];
                    a[count]=(-1)*a[count];
                }
            }
            long long int sum=0;
            for (int i=0;i<n;i++ )
            {
                sum=sum + a[i];
            }
            printf("%lld\n",sum);
        }

    printf("\n");
    return 0;
}

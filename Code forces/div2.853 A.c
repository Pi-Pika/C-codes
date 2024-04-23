#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,count=0,x,y,z,i,j,k;
    int a[10000],b[100000],c[100000];
    scanf("%d",&tc);

    while (tc--)
        {
            count=0;
            int min=2000000,gcd=1;
            scanf("%d",&n);
            for (int i=0;i<n;i++ )
                {
                    scanf("%d",&a[i]);
                    if(min<a[i])
                    {
                        min=a[i];
                    }
                }
            for (int i=1;i<=min;i++ )
                {
                    for (int j=0;j<n;j++ )
                        {
                            if(a[j]%i)
                            {
                                count++;
                            }
                        }
                    if(count==n) gcd=i;
                }
            if(n>gcd) printf("Yes\n");
            else printf("No\n");
        }

    printf("\n");
    return 0;
}

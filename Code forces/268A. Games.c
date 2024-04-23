#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()

{
    int n,x,y,z,i,j,k,count=0;
    int a[1000],b[1000];
    scanf("%d",&n);
    for (i=0;i<n ;i++ )
        {
            scanf("%d %d",&a[i],&b[i]);
        }
    for (i=0;i<n ;i++ )
        {
            for (j=0;j<n ;j++ )
                {
                    if (a[i]==b[j])
                        {
                            count++;
                        }
                }
        }
        printf("%d\n",count);
    return 0;
}


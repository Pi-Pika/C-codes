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
            scanf("%d %d %d",&x,&y,&z);
            k=x+y+z;
            if (k>1)
                {
                    count++;
                }
        }

        printf("%d\n",count);
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,x,y,z,i,j;
    char a[10000],b[100000],c[100000];
    while(scanf("%d %d",&n,&x))
    {
        int p=0,k=0,g1=0;
        for (int i=0;i<n;i++ )
            {
                scanf("%d %d",&y,&z);
                if(y>z) p=p+3;
                else if(y==z) g1++;
                else
                {
                    a[k]=(z-y)+1;
                    k++;
                }
            }

    }
    printf("\n");
    return 0;
}

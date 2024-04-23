#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()

{
    long long int n,a,x,y,z,i,j,k;
    //char a[],b[],c[];
    scanf("%lld",&n);

    for (i=0;i<n ;i++ )
    {
        scanf("%lld",&a);
        k=0;
    while (a>2)
    {
        if (a%2!=0)
            {
                k=1;
            }
        a=a/2;
    }
    if (k==0)
        {
            printf("NO\n");
        }else
        {
            printf("YES\n");;
        }
    }
    return 0;
}

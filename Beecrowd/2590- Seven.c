#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int tc;
    long long int n,k;
    scanf("%d",&tc);
    while(tc--)
    {
        int a[4]={1,7,9,3,6};
        scanf("%lld",&n);
        k=n%4;
        printf("%d\n",a[k]);
    }
    return 0;
}

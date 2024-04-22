#include <stdio.h>
#include<string.h>
#include <math.h>

int main()
{
    int tc;
    long long int n;
    double ans,x;
    scanf("%d", &tc);
    while(tc--)
    {
          scanf("%lld",&n);
          x=1+8*n;
          ans=(-1+sqrt(x))/2;
          printf("%lld\n",(long long int)ans);
    }
    return 0;
}

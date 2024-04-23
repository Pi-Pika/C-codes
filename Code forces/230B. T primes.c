#include <stdio.h>
#include<math.h>

int main()
{
  long long int n,sq=0,a,c=0;

  scanf("%lld", &n);

  for (long long int i = 0;i<n;i++)
    {
    c=0;
    scanf("%lld", &a);
    sq=sqrt(a);
        if((sq*sq)==a && a!=1)
        {
            for (long long int j=2;j<=sqrt(sq);j++ )
            {
                if(sq%j==0)
                {
                c=1;
                break;
                }

            }if(c==0)
            {
                printf("YES\n");
            }else
            {
                printf("NO\n");
            }
        }else
        {
            printf("NO\n");
        }

    }

  return 0;
}

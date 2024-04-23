#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    long long int tc,a,b,c,e2,e1;
    scanf("%lld",&tc);
    while (tc--)
        {
            scanf("%lld %lld %lld",&a,&b,&c);
            e1=(a-1);
            if(b<c)
            {
                e2=(c-b)+(c-1);
            }else if(b>c)
            {
                e2=(b-c)+(c-1);
            }
            if(e1==e2) printf("3\n");
            else if(e1>e2) printf("2\n");
            else if(e1<e2) printf("1\n");
        }

    printf("\n");
    return 0;
}

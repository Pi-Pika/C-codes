#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    long long int test, b1, b2, b3, c1, c2, c3;
    long long int a;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        scanf("%lld %lld %lld %lld %lld %lld", &b1, &c1, &b2, &c2, &c3, &c3);

        a = abs((b1 * (c2 - c3)) + (b2 * (c3 - c1)) + (b3 * (c1 - c2)));
        a = a *2;
        printf("%lld\n", a);
    }

    return 0;
}

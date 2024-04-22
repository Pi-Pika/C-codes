#include <stdio.h>

int main()
{

    long long int i, n, a;

    int facts[] = {1, 2, 6, 24, 120, 720, 5040, 40320};

    scanf("%lld", &n);

    a = 0;
    for (i = 7; i >= 0; --i)
    {
        a = a + (n / facts[i]);
         n = n % facts[i];
    }
    printf("%lld\n", a);

    return 0;
}

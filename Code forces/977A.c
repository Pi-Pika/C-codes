#include <stdio.h>

int main()
{
    int m, n, number = 0;
    scanf("%d %d", &m, &n);

    for (int i = 1; i <= n; i++)
    {
        if (m % 10 == 0)
        {
            m = (m / 10);
        }
        else
        {
             m--;
        }
    }

    printf("%d\n", m);

    return 0;
}

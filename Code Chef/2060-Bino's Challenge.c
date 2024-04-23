#include <stdio.h>

int main()
{
    int a, test;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    scanf("%d", &test);

    for (int i = 1; i <= test; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            c1 = (c1 + 1);
        }

        if (a % 3 == 0)
        {
            c2 = c2 + 1;
        }
        if (a % 4 == 0)
        {
            c3 = c3 + 1;
        }
        if (a % 5 == 0)
        {
            c4 = c4 + 1;
        }
    }
    printf("%d Multiplo(s) de 2\n", c1);
    printf("%d Multiplo(s) de 3\n", c2);
    printf("%d Multiplo(s) de 4\n", c3);
    printf("%d Multiplo(s) de 5\n", c4);

    return 0;
}

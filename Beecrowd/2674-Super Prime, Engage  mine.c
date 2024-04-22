#include <stdio.h>
#include <math.h>
int main()

{
    int n, c3 = 0, r, i, c2;
    while (scanf("%d", &n) != EOF)
    {
        int c1 = 0;
        for (i = 2; i <=sqrt(n); i++)
        {
            if (n % i == 0)
            {
                c1 = 1;
                break;
            }
        }
        if ((c1 == 0) && (n!=1))
        {
            while (1)
            {
                c2 = 0;
                r = n % 10;
                n = n / 10;
                // printf("%d bal\n",r);
                if (r != 3 && r != 2 && r != 5 && r != 7)
                {
                    c2 = 1;
                    break;
                }
                // printf("%d bal2\n",c2);

                if (n == 0)
                {
                    break;
                }
            }
            // printf("%d bal3\n",c2);
            if (c2 == 0)
            {
                printf("Super\n");
            }

            else
            {
                printf("Primo\n");
            }
        }
        else
        {
            printf("Nada\n");
        }
    }

    return 0;
}

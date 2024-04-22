#include <stdio.h>

int main ()
{

    int tamanna, i, j, z;

    while (scanf("%d", &tamanna) != EOF)
    {

        for (i = 0; i < tamanna; i += 2)
        {
            for (j = 0; j < (tamanna - i) / 2; j++)
                printf(" ");

            for (z = i; z >= 0; z--)
                printf("*");

            printf("\n");

        }

        for (i = 0; i < tamanna/2; i++)
            printf(" ");
        printf("*\n");

        for (i = 1; i < tamanna/2; i++)
            printf(" ");

        printf("***\n\n");

    }
}

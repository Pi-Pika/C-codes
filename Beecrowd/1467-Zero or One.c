#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    while (scanf("%d %d %d", &x, &y, &z) != EOF)
    {

        if (x == y)
        {
            if (y == z)
            {
                printf("*\n");
            }
            else
                printf("C\n");
        }
        else if (y == z)
        {
            if (z == x)
            {
                printf("*\n");
            }
            else
                printf("A\n");
        }
        else printf("B\n");
    }

    return 0;
}

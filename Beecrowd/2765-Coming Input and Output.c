#include <stdio.h>

int main()
{
    char c;

    while (1)
    {
        scanf("%c", &c);

        if(c == '\n')
        {
            printf("\n");
            return 0;
        }

        if(c == ',')
            {
                c = '\n';
            }
        printf("%c", c);
    }
}

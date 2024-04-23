#include <stdio.h>

int main()
{
    int test, arr[10000], c = 0;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        scanf("%d", &arr[i]);
        if ((arr[i] == 1) || (arr[i] == 2))
        {
            printf("0\n");
        }
        else
        {
            c = (arr[i] - 1) / 2;
            printf("%d\n", c);
        }
    }

    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    int a1, a2, stm, s = 0, h;
    scanf("%d", &a1);
    int arr[a1];

    for (int i = 0; i < a1; i++)
    {
        scanf("%d ", &arr[i]);
    }
    scanf("%d", &a2);
    for (int k = 0; k < a2; k++)
    {
        int count = 0;
        scanf("%d", &stm);
        s = stm;
        for (int i = 0; i < a1 - 1; i++)
        {
            h = arr[i] - arr[i + 1];
            s = s + h;
            if (s <0 )
            {
                count = 1;
                printf("No way Home\n");
                break;
            }
        }
        if (count == 0)
        {
            printf("Homecoming\n");
        }
    }

    return 0;
}

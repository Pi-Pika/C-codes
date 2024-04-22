#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char a[10], b[10];
    for (int i = 0; i < n; i++)
    {
        gets(a);
        gets(b);

        if ((a[1] == 't') && (b[1] != 't'))
        {
            printf("Jogador 1 venceu\n");
        }
        else if ((b[1] == 't') && (a[1] != 't'))
        {
            printf("Jogador 2 venceu\n");
        }
        else if ((b[1] == 't') && (a[1] == 't'))
            printf("Aniquilacao mutua\n");
        else if ((a[1] == 'e') && (b[1] != 'e'))
        {
            printf("Jogador 1 venceu\n");
        }
        else if ((b[1] == 'e') && (a[1] != 'e'))
        {
            printf("Jogador 2 venceu\n");
        }
        else if ((b[1] == 'e') && (a[1] == 'e'))
            printf("Sem ganhador\n");

        else if (b[1] == 'a' && a[1] == 'a')
            printf("Ambos venceram\n");
    }

    return 0;
}

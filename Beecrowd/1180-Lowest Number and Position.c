#include<stdio.h>
int main()
{
    int A[1000];
    int n, lowest, position;

    scanf("%d", &n);

    lowest=1000;
    position = 0;

    for(int i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
        if(lowest>A[i])
        {
            lowest=A[i];
            position = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",lowest,position);
    return 0;

}

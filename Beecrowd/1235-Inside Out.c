#include <stdio.h>
#include <string.h>
int main()
{
    char ch[1000];
    int t, t1, t2, l, n;
    scanf("%d", &t);
    getchar();
    for (int k = 0; k < t; k++)
    {

        fgets(ch,120, stdin);

        l = strlen(ch)-1;

        n = (l / 2) ;

        for (int i = n-1; i >= 0; i--)
        {
            printf("%c", ch[i]);
        }
        for (int i = l -1; i >=n; i--)
        {
            printf("%c", ch[i]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}

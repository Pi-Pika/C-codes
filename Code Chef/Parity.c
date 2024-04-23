
#include <stdio.h>
int main()

{
    int n,a ;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&n);
        if (n % 2 == 0)
        {
            printf("Yes\n");
        }
        else
        {
             printf("No\n");
        }
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    int n,x,i;
    char a[100], b[100];
    while(scanf("%s",a)!=EOF)
    {
        scanf("%d",&n);

        for ( i = 0; i < n; i++)
        {
            scanf("%d",&x);
            printf("%c",a[x-1]);
        }
    printf("\n");
    }
    return 0;
}

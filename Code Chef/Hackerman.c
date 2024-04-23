
#include <stdio.h>
int main()

{
    int n,a,m,o=0 ;
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d",&n);
        scanf("%d",&m);

        o=n+m;

        if (o == 2  || o == 3  ||o == 5  ||o == 7  ||o == 11 )
        {
            printf("Alice\n");
        }
        else
        {
             printf("Bob\n");
        }
    }
    return 0;
}

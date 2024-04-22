#include <stdio.h>
int main()
{
    int a,c,j=0,p=1;
    scanf("%d", &a);

    int ara[a];

    for(int i=0; i<a; i++)
        scanf("%d", &ara[i]);

    c=ara[j];

    for(j=0; j<a; j++)
    {
        if(ara[j]<c)
        {
            c=ara[j];
            p=j+1;
        }

    }
    printf("%d\n",p);
    return 0;
}

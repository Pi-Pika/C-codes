#include <stdio.h>

int main()
{
    char o;
    int i,j,c;
    float s = 0.0, n;

    scanf("%d ",&c);
    scanf("%c",&o);

    for (i=0;i<12;i++)
    {
        for (j=0;j<12; j++)
        {
            scanf("%f",&n);
            if (i==c) s=s+n;
        }
    }

    if (o=='S') printf("%.1f\n", s);
    else printf("%.1f\n", s / 12);

    return 0;
}

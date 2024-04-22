
#include <stdio.h>

int main()
{
    char o;
    int i,j;
    float n[15][15];
    float s = 0.0;

    scanf("%c",&o);

    for (i=0;i<12;i++)
    {
        for (j=0;j<12; j++)
        {
            scanf("%f",&n[i][j]);
            if (j<11-i) s=s+n[i][j];
        }
    }

    if (o=='S') printf("%.1f\n",s);
    else printf("%.1f\n",s /66.0);

    return 0;
}

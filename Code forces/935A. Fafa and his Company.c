#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int ne,c=0,i,g;
    scanf("%d",&ne);

    for (i=1;i<=ne/2;i++ )
        {
            g=ne-i;
            if (g%i==0)
                {
                    c++;
                }
        }
    printf("%d\n",c);
    return 0;
}

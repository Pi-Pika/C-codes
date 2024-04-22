#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int n,a,b,c,d,x,y,z,x1,y1,z1,sum=0;

    while (1)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a==0 && b==0 && c==0 && d==0)
        {
            break;
        }
        if ((a==c) && (b==d))
        {
            printf("0\n");
        }
        else if ((abs(a-c)==abs(b-d)) || ((a==c) || (b==d)))
        {
            {
                printf("1\n");
            }
        }
        else
        {
            printf("2\n");
        }
    }
    return 0;
}


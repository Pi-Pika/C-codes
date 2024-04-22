#include<stdio.h>
#include<math.h>

int main()
{
    int x1,x2,y1,y2,r1,r2;
    while(scanf("%d %d %d %d %d %d",&r1,&x1,&y1,&r2,&x2,&y2)!=EOF)
    {
        double d=0;
        d=sqrt(abs(pow((x2-x1),2)+pow((y2-y1),2)));
        if ((d+r2)>r1)
            {
                printf("MORTO\n");
            }else
            {
                printf("RICO\n");
            }
    }
    return 0;
}

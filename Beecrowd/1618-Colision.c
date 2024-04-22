#include<stdio.h>

int main()
{
    int t,ax,ay,bx,by,cx,cy,dx,dy,rx,ry;
    scanf("%d",&t);

    for (int i = 1; i <=t; i++)
    {
        scanf("%d %d %d %d %d %d %d %d %d %d",&ax,&ay,&bx,&by,&cx,&cy,&dx,&dy,&rx,&ry);
        if (rx>=ax && ry>=ay)
        {
            if (rx<=cx && ry<=cy)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
            else
            {
                printf("0\n");
            }
    }

    return 0;
}

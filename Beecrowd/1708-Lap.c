#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()

{
    int x,y,z,i,j=0,count=0;
    scanf("%d %d",&x,&y);

    i=y-x;
    j=i;

    while (1)
    {
        count++;
        if(j>=y)
        {
            break;
        }
        j=j+i;
    }
    printf("%d\n",count);
    return 0;
}

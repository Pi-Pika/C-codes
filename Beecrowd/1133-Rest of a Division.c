#include <stdio.h>

int main()
{
    int x, y, sum = 0, i;
    int min, max;

    scanf("%d%d", &x,&y);

    if(x < y){
    min = x;
    max = y;
    }else{
    max = x;
    min = y;
    }

    for(i = (min + 1); i < max; ++i)
    {
    if(i % 5 == 2 || i % 5 == 3){
    printf("%d\n",i);;
    }
    }

 return 0;
}

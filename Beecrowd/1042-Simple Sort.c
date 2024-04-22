#include <stdio.h>

int main()
{
    int max,mid,min,x,y,z;
    scanf("%d %d %d",&x,&y,&z);

    if (x>y && x>z){
        max=x;
        if (y>z){
            mid=y;
            min=z;
        }else {
            mid=z;
            min=y;
        }
    }else if (y>x && y>z){
        max=y;
        if (x>z){
            mid=x;
            min=z;
        }else {
            mid=z;
            min=x;
        }
    }else if (z>x && z>y){
        max=z;
        if (x>y){
            mid=x;
            min=y;
        }else {
            mid=y;
            min=x;
        }
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",min,mid,max,x,y,z);
    return 0;
}

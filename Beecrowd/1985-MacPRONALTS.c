#include<stdio.h>

int main()

{
    int i,x,y;
    float s=0,z;
    scanf("%d",&x);

    for (i=0;i<x ;i++ ){
        scanf("%f %d",&z,&y);
        if (z==1001){
            z=1.50;
        } if (z==1002){
            z=2.50;
        }if (z==1003){
            z=3.50;
        }if (z==1004){
            z=4.50;
        }if (z==1005){
            z=5.50;
        }
    s=s+z*y;
    }
    printf("%.2f\n",s);
    return 0;
}

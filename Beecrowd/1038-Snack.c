#include<stdio.h>

int main()

{
    int a,b;
    float c;
    scanf("%d %d",&a,&b);
    if (a==1){
        c=4*b;
        printf("Total: R$ %.2f\n",c);
    } else if (a==2){
        c=4.50*b;
        printf("Total: R$ %.2f\n",c);
    } else if (a==3){
        c=5*b;
        printf("Total: R$ %.2f\n",c);
    } else if (a==4){
        c=2*b;
        printf("Total: R$ %.2f\n",c);
    } else if (a==5){
        c=1.50*b;
        printf("Total: R$ %.2f\n",c);
    }

    return 0;
}

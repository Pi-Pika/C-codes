
#include<stdio.h>

int main()

{
    int a,i,c=0;

    while(1){
    scanf("%d",&a);

    if (a==0){
        break;
    }

    printf("1");

    for (i=2;i<=a;i++){
        printf(" %d",i);
    }
    printf("\n");
    }
    return 0;
}

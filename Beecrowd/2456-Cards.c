#include<stdio.h>

int main()

{
    int a[6];

    for (int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    if (a[4]>a[3] && a[3]>a[2] && a[2]>a[1] && a[1]>a[0]){
        printf("C\n");
    }else if (a[4]<a[3] && a[3]<a[2] && a[2]<a[1] && a[1]<a[0]){
        printf("D\n");
    } else {
        printf("N\n");
    }
    return 0;
}

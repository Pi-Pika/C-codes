#include<stdio.h>

int main()

{
    int n,a[1000];
    scanf("%d",&n);

    a[0]=0;
    a[1]=1;

    for(int i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    printf("0");
    for(int i = 1; i < n; i++){
        printf(" %d", a[i]);
    }
    printf("\n");
    return 0;
}

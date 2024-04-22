#include<stdio.h>

int main()
{
    int i,p,a[100],j=0;

    for (i=0;i<100;i++){
        scanf("%d",&a[i]);
    }

    for (i=0;i<100;i++){
        if(a[i]>j){
            j=a[i];
            p=i+1;
        }
    }
    printf("%d\n",j);
    printf("%d\n",p);

    return 0;
}

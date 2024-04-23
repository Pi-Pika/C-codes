#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()

{
    int n,x,y,z,i,j,k;
    char a[1000];
    scanf("%s",&a);
    if (a[0]>96 && a[0]<123)
        {
            a[0]=a[0]-32;
        }


    printf("%s\n",a);
    return 0;
}

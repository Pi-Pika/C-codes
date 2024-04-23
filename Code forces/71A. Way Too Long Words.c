#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()

{
    int n,x,y,z,i,j,k;
    char a[100];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",&a);
        i=strlen(a);
        if(i>10)
        {
            printf("%c%d%c\n",a[0],i-2,a[i-1]);
        }else
        {
            printf("%s\n",a);
        }
    }
    printf("");
    return 0;
}

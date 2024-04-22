#include<stdio.h>
#include<string.h>
#include <math.h>

int main()
{
    int tc,a,b,temp;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d %d",&a,&b);
        do{
            temp=b;
            b=a%b;
            a=temp;
        }while(b!=0);
        printf("%d\n",a);
    }
    return 0;
}

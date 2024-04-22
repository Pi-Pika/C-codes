
#include<stdio.h>

int main()
{
    int t,a,N[1010];
    scanf("%d",&t);

    a = 0;
    for(int i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n",i,a);
        a++;
        if(a == t) a = 0;
    }
    return 0;
}

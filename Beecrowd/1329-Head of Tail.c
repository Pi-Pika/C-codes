#include<stdio.h>


int main()

{
    int n,a;

    while (1)
    {
        scanf("%d",&n);
        if (n==0)
        {
            break;
        }
    int c1=0,c2=0;
    for (int i=0;i<n ;i++ )
    {
        scanf("%d",&a);
        if (a==0)
        {
            c1++;
        }else
        {
            c2++;
        }
    }
    printf("Mary won %d times and John won %d times\n",c1,c2);
    }

    return 0;
}

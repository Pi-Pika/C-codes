#include<stdio.h>

int main()

{
    int a,b,c,d,count=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a == 1)
    {
        printf("YES\n");
    }else if(a==0)
        {
            if (b==1)
            {
                count++;
            }if (c==1)
            {
                count++;
            }if (d==1)
            {
                count++;
            }
            if (count>1)
            {
                printf("YES\n");
            } else
            {
                printf("NO\n");
            }
        }

    return 0;
}

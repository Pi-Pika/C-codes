#include <stdio.h>

int main() {

    int n,count=0,d,bount=0,tount=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {   do{
             d=n%10;
             if(d==2 || d==3 || d==5 || d==7)
             {
                 bount++;
             }
            n=n/10;
            tount++;

              }
            while(n!=0);

            if(count==tount)
            {
                printf("Super\n");
            }

            else
            {
                printf("Primo\n");
            }
        }
        else
        {
            printf("Nada\n");
        }
    }

    return 0;
}

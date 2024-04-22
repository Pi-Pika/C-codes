#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,count=0,x,y,z,c,i,j,k;
    char a[2000],b[100000];
    while(scanf("%s",a)!= EOF)
    {
        n=strlen(a);
        c=0;
        if(n>=4) x=(a[n-1]-48)+((a[n-2]-48)*10)+((a[n-3]-48)*100)+((a[n-4]-48)*1000);
        else if(n==3) x=(a[n-1]-48)+((a[n-2]-48)*10)+((a[n-3]-48)*100);
        else if(n==2) x=(a[n-1]-48)+((a[n-2]-48)*10);
        else if(n==1) x=(a[n-1]-48);

        if(n>4 && x==0) x=1000;
        if(x%400==0)
        {
                printf("This is leap year.\n");
                c=1;
        }else if(x%100==0)
        {
                c=0;
        }else if(x%4==0)
        {
                printf("This is leap year.\n");
                c=1;
        }
        if(x%15==0)
        {
            c=1;
            printf("This is huluculu festival year.\n");
        }
        if(x%55==0)
        {
            c=1;
            printf("This is buluculu festival year.\n");
        }
        if(c==0) printf("This is ordinary year.\n");
    printf("\n");
    }
    return 0;
}

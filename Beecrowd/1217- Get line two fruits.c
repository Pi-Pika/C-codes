#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int tc,n,count,kg=0,z,i,j,k;
    float x,tk=0.00;
    char y,a[10000],b[100000],c[100000];
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        count=1;
        scanf("%f",&x);
        getchar();
        while(1)
        {
            scanf("%c",&y);
            if(y==' ') count++;
            else if(y=='\n') break;
        }
        kg+=count;
        tk+=x;
        printf("day %d: %d kg\n",i,count);
    }
    float m=kg/(tc*1.00);
    float m2=tk/(tc*1.00);
    printf("%.2f kg by day\n",m);
    printf("R$ %.2f by day\n",m2);
    return 0;
}

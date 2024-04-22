#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n, i;
    while(scanf("%d",&tc)!=EOF)
    {
        char x;
        int count=0;
        int a[70]={0},b[70]={0};
        for(int i=0;i<tc;i++)
        {
            scanf("%d %c",&n,&x);
            if(x=='D') a[n]++;
            else if(x=='E') b[n]++;
        }
        for (int i=30;i<61;i++ )
            {
                if(a[i]<b[i]) count+=a[i];
                else count+=b[i];
            }
        printf("%d\n",count);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int n,x,y,i;
    char a[20000];
    while (scanf("%s",a)!=EOF)
    {
        int max=0,pos;
        int b[12]={0};

        n=strlen(a);
        for ( i=0;i<n;i++ )
            {
                b[a[i]-48]++;
            }
        for ( i=0;i<10;i++ )
            {
                if(b[i]>max)
                {
                    max=b[i];
                    pos=i;
                }
            }
        printf("%d\n",pos);
    }

    return 0;
}

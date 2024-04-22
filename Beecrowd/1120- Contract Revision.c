#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,y,z,i,k;
    while(1)
    {
        char b[10000],a[10000];
        scanf("%d %s",&tc,a);
        if(tc==0 && a[0]=='0') break;
        n=strlen(a);
        int j=0,count=0,x;
        for (int i=0;i<n;i++ )
            {
                if((a[i]-48)!=tc)
                {
                    b[j]=a[i];
                    j++;
                }
                if(a[i]=='0') count++;
            }
        x=strlen(b);
        if(count==x || j==0) printf("0\n");
        else {
            for (int i=0;i<j;i++ )
                {
                    printf("%c",b[i]);
                }
            printf("\n");
        }
    }
    return 0;
}

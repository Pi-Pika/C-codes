#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,count=0,x,y,z,i,j,k;
    char a[10000],b[100000],c[100000];
    while(1)
    {
        int cs=0,ct=0;
        gets(a);
        if(a[0]=='*') break;
        n=strlen(a);
        for (int i=0;i<n;i++ )
            {
                if(a[i]>64 && a[i]<91) a[i]=a[i]+32;
            }
        //printf("%s\n",a);
        for (int i=1;i<n;i++ )
            {
                if(a[i]==' ')
                {
                    cs++;
                    if(a[0]==a[i+1]) ct++;
                }
            }
        if(cs==ct) printf("Y\n");
        else printf("N\n");
        //getchar();
    }
    return 0;
}

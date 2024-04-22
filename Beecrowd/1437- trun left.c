#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    while(1)
    {
        int upokar=0,n;
        char x,a[10000];
        scanf("%d",&n);
        if(n==0) break;
        scanf("%s",a);
        for (int i=0;i<n;i++ )
        {
            if(a[i]=='D')
            {
                upokar++;
                if(upokar==4) upokar=0;
            }
            if(a[i]=='E')
            {
                upokar--;
                if(upokar==-4) upokar=0;
            }
        }
        if(upokar==0) printf("N\n");
        else if(upokar==-3 || upokar==1) printf("L\n");
        else if(upokar==-2 || upokar==2) printf("S\n");
        else if(upokar==-1 || upokar==3) printf("O\n");
    }
    return 0;
}

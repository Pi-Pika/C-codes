#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int n,i,j,k;
    char a[10000],b[100000],c[100000];
    while(gets(a)!=EOF)
    {
        //getchar();
        int c1=0,c2=0,c3=0;
        n=strlen(a);
        if(n<6 || n>32) printf("Senha invalida.\n");
        else
        {
            for (i=0;i<n;i++ )
                {
                    if(a[i]>64 && a[i]<91) c1++;
                    else if(a[i]>47 && a[i]<58 ) c2++;
                    else if(a[i]>96 && a[i]<123 ) c3++;
                    else
                    {
                        c1=0;
                        break;
                    }
                }
            if(c1==0 || c2==0 || c3==0) printf("Senha invalida.\n");
            else printf("Senha valida.\n");
            getchar();
        }
    }

    return 0;
}

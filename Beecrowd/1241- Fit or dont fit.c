#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n1,n2,i,j,k;
    char a[10000],b[10000];
    scanf("%d",&tc);
    while (tc--)
        {
            int upokar=0;
            scanf("%s %s",a,b);
            n1=strlen(a);
            n2=strlen(b);
            for (i=n1-1,j=n2-1;i>=0,j>=0;i--,j-- )
                {
                    if(a[i]==b[j]) upokar++;
                }
            if(upokar==n2) printf("encaixa\n");
            else printf("nao encaixa\n");
        }

    return 0;
}

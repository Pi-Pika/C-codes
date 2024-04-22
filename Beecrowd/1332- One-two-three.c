#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,x,y,z,i,j,k;
    char a[10000],b[100000],c[100000];
    scanf("%d",&tc);
    while (tc--)
        {
            scanf("%s",a);
            n=strlen(a);
            if(n==5)
            {
                printf("3\n");
            }else
            {
                if((a[0]=='t' && a[1]=='w') || (a[0]=='t' && a[2]=='o') || (a[2]=='o' && a[1]=='w')) printf("2\n");
                else printf("1\n");
            }
        }

    return 0;
}

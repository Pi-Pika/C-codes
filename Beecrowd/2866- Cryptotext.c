#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,count=0,x,y,z,i,j,k;
    char a[10000],b[100000],c[100000];
    scanf("%d",&tc);
    while (tc--)
        {
            scanf("%s",a);
            for (int i=strlen(a)-1;i>=0;i-- )
                {
                    if(a[i]>91 && a[i]<123) printf("%c",a[i]);
                }
            printf("\n");
        }
    return 0;
}

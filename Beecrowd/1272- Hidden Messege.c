#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i,n,tc,l;
    char a[55];
    scanf("%d",&tc);
    getchar();
    while(tc--)
    {
        gets(a);
        n=strlen(a);
        if(a[0]>96 && a[0]<123) printf("%c",a[0]);
        for(i=1;i<n;i++)
        {
            if(a[i]>96 && a[i]<123)
            {
                if(a[i-1]<96 || a[i-1]>123) printf("%c",a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

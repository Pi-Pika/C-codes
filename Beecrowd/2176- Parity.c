#include<stdio.h>
#include<string.h>

int main()

{
    int n,upokar=0,i;
    char a[100000];
    scanf("%s",a);
    n=strlen(a);

    for (i=0;i<n;i++ )
        {
            if(a[i]=='1') upokar++;
        }

    if(upokar%2==0)
    {
        printf("%s",a);
        printf("0\n");
    }else
    {
        printf("%s",a);
        printf("1\n");
    }

    return 0;
}

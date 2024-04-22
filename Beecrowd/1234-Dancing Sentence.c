#include <stdio.h>
#include <string.h>
int main()
{
    int n,x,i;
    char a[100], b[100];
    while (gets(a) != NULL)
    {
        x=0;
        n=strlen(a);
        for (i=0;i<n;i++)
        {
            if ((a[i]>64 && a[i]<97) && (x%2==0)) a[i]=a[i]+32;
            if(a[i]==' ') x--;
            else if (x%2==0) a[i]=a[i]-32;
            x++;
        }
        printf("%s\n",a);
    }
    return 0;
}

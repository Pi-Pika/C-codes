#include<stdio.h>
#include<string.h>

int main()

{
    int tc,n1,n2,n,count=0,x,y,z,i,j,k;
    char a[100000],b[100000];
    scanf("%s %s",a,b);
    n1=strlen(a);
    n2=strlen(b);
    if(n1>n2)
    {
        n=n1;
    }else if (n1<n2)
    {
        n=n2;
    }
    count=0;
        for (i=0;i<n;i++ )
            {
                if(a[i]<b[i])
                {
                    count=1;
                    break;
                }else if (a[i]>b[i])
                {
                    count=-1;
                    break;
                }
            }
        if (count==1 || count==0)
        {
            printf("%s\n",a);
            printf("%s\n",b);
        }else if(count==-1)
        {
            printf("%s\n",b);
            printf("%s\n",a);
        }
    return 0;
}

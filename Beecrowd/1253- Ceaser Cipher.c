#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,x,temp,z;
    char a[55];
    scanf("%d",&tc);
    while (tc--)
        {
            scanf("%s %d",a,&x);
            n=strlen(a);
            for (int i=0;i<n;i++ )
                {
                    z=a[i]-x;
                    if(z<65)
                    {
                        temp=65-z;
                        z=91-temp;
                    }
                    a[i]=z;
                }
            printf("%s\n",a);
        }
    return 0;
}

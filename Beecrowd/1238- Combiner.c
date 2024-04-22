#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n1,n2,count=0,x,y,z,i,j,k;
    char a[10000],b[100000],c[100000];
    scanf("%d",&tc);
    while (tc--)
        {
            scanf("%s %s",a,b);
            n1=strlen(a);
            n2=strlen(b);

            if(n2>n1)
            {
                for (int i=0;i<n1;i++ )
                {
                    printf("%c%c",a[i],b[i]);
                }
                for (int i=n1;i<n2;i++ )
                    {
                        printf("%c",b[i]);
                    }
            }else
            {
                for (int i=0;i<n2;i++ )
                {
                    printf("%c%c",a[i],b[i]);
                }
                for (int i=n2;i<n1;i++ )
                    {
                        printf("%c",a[i]);
                    }
            }
            printf("\n");

        }

    return 0;
}

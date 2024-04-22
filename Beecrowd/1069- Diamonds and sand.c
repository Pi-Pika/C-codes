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
            n=strlen(a);
            j=0;
            x=0;
            count=0;
            while(1)
            {
                if(a[j]=='\0') break;
                if(a[j]=='<') x++;
                if(a[j]=='>')
                {
                    if(x>0)
                    {
                        count++;
                        x--;
                    }
                }
                j++;
            }
            printf("%d\n",count);
        }

    return 0;
}

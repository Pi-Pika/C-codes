#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,x,y,z,i,j,k;
    char a[10050],b[100000],c[100000];
    scanf("%d",&tc);
    while (tc--)
        {
            int count=0;
            scanf("%s %s",a,b);
            n=strlen(a);
            for (int i=0;i<n;i++ )
                {
                    x=b[i]-a[i];
                    if(x<0) count+= x+26;
                    else count+=x;
                }
            printf("%d\n",count);
        }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,count=0,x,y,z,i,j,k;
    char a[10000],b[100000],c[100000];
    scanf("%d %d",&tc,&n);
    for (int i=0;i<n;i++ )
        {
            scanf("%s",a);
            if(a[0]=='f') tc++;
            else tc--;
        }
    printf("%d\n",tc);
    return 0;
}

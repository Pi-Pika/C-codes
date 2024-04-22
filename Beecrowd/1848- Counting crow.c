#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,count=0,x,y,z,i,j,k,upokar=0;
    char a[10000],b[100000],c[100000];
    while (1){
    scanf("%s",a);
    if(a[0]=='c')
    {
        scanf("%s",a);
        printf("%d\n",count);
        count=0;
        upokar++;
    }else if(a[0]=='*' || a[0]=='-')
    {
        if(a[0]=='*')
        {
            count+=4;
        }if(a[1]=='*')
        {
            count+=2;
        }if(a[2]=='*')
        {
            count+=1;
        }
    }
    if(upokar==3)
    {
        return 0;
    }
    }
}

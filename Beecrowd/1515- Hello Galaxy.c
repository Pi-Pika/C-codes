#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,count=0,x,y,z,i,j,t;
    while(1)
    {
        char a[105][60];
        int min=2115,b[105];
        scanf("%d",&n);
        if(n==0) return 0;
        for (int i=0;i<n;i++ )
            {
                scanf("%s %d %d",a[i],&x,&t);
                b[i]=x-t;
                if(min>b[i])
                {
                    min=b[i];
                    y=i;
                }
            }
        printf("%s\n",a[y]);
    }
}

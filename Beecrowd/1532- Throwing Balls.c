#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,x,y,z,j;
    char a[10000],b[100000],c[100000];
    while(1)
    {
        scanf("%d %d",&x,&y);
        int count=0,k=0;
        if(x==0 && y==0) break;
        while(1)
        {
            for (int i=y;i>0;i-- )
            {
                for (int j=i;j>0;j-- )
                    {
                        count=count+i;
                        if(count==x)
                        {
                            k=1;
                            break;
                        }
                    }
            }
            y--;
            count=0;
            if(y==0) break;
            if(k==1) break;
        }
        if(k==1) printf("possivel\n");
        else printf("impossivel\n");
    }
    return 0;
}

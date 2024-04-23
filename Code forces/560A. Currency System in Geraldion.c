#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,flag=0,a,x,y,z,i,j,k;
    scanf("%d",&tc);

    while(tc--)
    {
        scanf("%d",&n);
        if (n==1)
        {
            flag=1;
        }
    }
    if (flag==1) printf("-1\n");
    else printf("1\n");

    return 0;
}

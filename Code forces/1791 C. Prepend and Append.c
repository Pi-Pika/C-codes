#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,count,y,z,i,j,k,sum=0;
    char x[3000];
    scanf("%d",&tc);

    while (tc--)
        {
            scanf("%d %s",&n,x);
            sum=n;
            count=0;
            int j=0;
//            printf("%s %d\n",x,n);
//            printf("%c %c\n",x[0],x[n-1]);
            if (x[0]==x[n-1])
            {
                count=1;
            }
            //printf("%d\n",count);
            for (i=0;i<n/2;i++)
                {
                    if (i==j)
                    {
                        if(x[i]!=x[n-i-1]){
                        sum=sum-2;
                        j++;
                        }
                    }else break;
                }
            //printf("%d\n",count);
            if(count==1) printf("%d\n",n);
            else printf("%d\n",sum);
        }
    return 0;
}

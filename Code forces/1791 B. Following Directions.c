#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,count,y,z,j,k;
    char x[60];
    scanf("%d",&tc);

    while (tc--)
        {
            count=0;
            int sum1=0,sum2=0;
            scanf("%d %s",&n,x);
            for (int i=0;i<n;i++ )
                {
                    if(x[i]=='U') sum1=sum1+1;
                    else if(x[i]=='D') sum1=sum1-1;
                    else if(x[i]=='R') sum2=sum2+1;
                    else if(x[i]=='L') sum2=sum2-1;
                    if(sum1==1 && sum2==1){
                        count=1;
                        break;
                    }
                }
            if(count==1) printf("YES\n");
            else printf("NO\n");
        }

    printf("\n");
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,max,c1,c2,y,z,i,j,k;
    char x[100000];
    scanf("%d",&tc);

    while (tc--)
        {
            max=0;
            int m1[150]={0},m2[150]={0};
            scanf("%d %s",&n,x);
            for (int i=0;i<n;i++ )
                {
                    m2[x[i]]++;
                }
            for (int i=0;i<n;i++ )
                {
                    c1=0,c2=0;
                    m1[x[i]]++;
                    m2[x[i]]--;
                    for (j=96;j<123;j++ )
                        {
                            if(m1[j]>0) c1++;
                        }
                    for (j=96;j<123;j++ )
                        {
                            if(m2[j]>0) c2++;
                        }
                    //printf("%d %d\n",c1,c2);
                    if(max<(c1+c2)) max=c1+c2;
                }
            printf("%d\n",max);
        }
    return 0;
}

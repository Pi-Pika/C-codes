
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,max,x,y,z,i,j,k;
    while (1)
        {
            int count=0;
            char a[100][100],b[100000];
            max=0;
            scanf("%d",&tc);
            if(tc==0) break;
            else if(tc==1)
            {
                scanf("%s",b);
                printf("\n%s\n",b);
            }
            else
            {
                for (int i=0;i<tc;i++ )
                    {
                        scanf("%s",a[i]);
                        n=strlen(a[i]);
                        if(n>max)
                        {
                            max=n;
                        }
                    }
                    printf("\n");
                for (i=0;i<tc;i++ )
                    {
                        n=strlen(a[i]);
                        count=max-n;
                        for (j=0;j<count;j++ )
                            {
                                printf(" ");
                            }
                        printf("%s\n",a[i]);
                    }
            }

        }

    return 0;
}

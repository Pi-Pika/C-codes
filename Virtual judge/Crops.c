#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int a,b,count=0;
    scanf("%d %d",&a,&b);

    char arr[30][30]={'.'};

    for (int i=1;i<=a;i++ )
        {
            for (int j=1;j<=b;j++ )
                {
                    scanf("%c",&arr[i][j]);
                }
        }

    for (int i=1;i<=a;i++ )
        {
            for (int j=1;j<=b;j++ )
                {
                    if(arr[i][j]== '.')
                    {
                        if(arr[i+1][j]=='.' && arr[i-1][j]=='.' && arr[i][j+1]=='.' && arr[i][j-1]=='.')
                        {
                            count++;
                        }
                    }
                }
        }


    printf("%d\n",count);
    return 0;
}

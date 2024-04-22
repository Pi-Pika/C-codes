#include<stdio.h>
#include<string.h>

int main()

{
    int n,upokar=0,i,tc;
    char a;
    scanf("%d",&tc);
    getchar();
    while (tc--)
        {
            for (i=0;i<10000;i++ )
                {
                    scanf("%c",&a);
                    if(a=='\n')
                    {
                        printf("I am Toorg!\n");
                        break;
                    }
                }
        }

    return 0;
}


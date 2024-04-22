#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int tc;
    float v;
    scanf("%d",&tc);
    char ch[20000];
    for (int i = 0; i < tc; i++)
    {
        scanf("%s",ch);
        v = strlen(ch) * (1/100.0);
        printf("%0.2f\n",v);
    }

    return 0;
}

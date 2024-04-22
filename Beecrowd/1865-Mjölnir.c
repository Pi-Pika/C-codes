#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()

{
    char ch[100];
    int n,ts;
    scanf("%d", &ts);
    for (int i = 0; i < ts; i++)
    {
        getchar();
        scanf("%s %d", ch, &n);
        if (!strcmp(ch, "Thor"))
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    int l, t, c = 0;
    char ch[10000];
    fgets(ch, 1000, stdin);
    l = strlen(ch) - 1;
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (ch[i] > ch[j])
            {
                t = ch[i];
                ch[i] = ch[j];
                ch[j] = t;
            }
        }
    }
    for (int i = 0; i < l; i++)
    {
        if (ch[i] != ch[i + 1])
        {
            c++;
        }
    }

    if (c % 2 != 0)
    {
        printf("IGNORE HIM!\n");
    }
    else
        printf("CHAT WITH HER!\n");
    return 0;
}

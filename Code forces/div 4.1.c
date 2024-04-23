#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int n;
    char c;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        {
            scanf("%c",&c);
            if(c== 'c' || c== 'o' || c== 'd' || c=='e' || c=='f' || c=='r' || c=='s')
            {
                printf("YES\n");
            } else printf("NO\n");
        }
    return 0;
}


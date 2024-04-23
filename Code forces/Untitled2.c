#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,count=0,x,y,z,i,j,k;
    char ch;
    scanf("%d",&tc);

    while(tc--)
    {
        scanf("%c",&ch);
        if(ch== 'c' || ch== 'o' || ch== 'd' || ch=='e' || ch=='f' || ch=='r' || ch=='s')
        {
            printf("YES\n");
        }else printf("NO\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()

{
    char ch[]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n;
    scanf("%d",&n);

    for (int i=0;i<n ;i++ )
        {
            printf("%c",ch[i]);
        }
    printf("\n");
    return 0;
}

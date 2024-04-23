#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int s1ln,s2ln;
    char s1[105],s2[105];
    scanf("%s %s",&s1,&s2);

    s1ln=strlen(s1);
    s2ln=strlen(s2);

    if(s1ln<s2ln) printf("NO\n");


    printf("\n");
    return 0;
}

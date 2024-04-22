#include<stdio.h>

int main()

{
    int a,b,c;
    char d;
    scanf("%d",&a);
    scanf("%d %c %d",&b,&d,&c);

    if (d=='+'){
        if (a>=(b+c)){
            printf("OK\n");
        }else {
            printf("OVERFLOW\n");
        }
    }if (d=='*'){
    if (a>=(b*c)){
            printf("OK\n");
        }else {
            printf("OVERFLOW\n");
        }
    }
    return 0;
}

#include<stdio.h>

int main()

{
    long int a,b,c=0;

    while(1){
    scanf("%ld %ld",&a,&b);

    if(a==0 && b==0){
        break;
    }else{
        c=a*b;
    }
    printf("%ld\n",c);
    }
    return 0;
}

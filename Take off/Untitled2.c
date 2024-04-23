#include <stdio.h>

int main() {
    int N,p,a,b,c;
    scanf("%d",&N);
    if(N%3==0)
        {
           printf("Equilateral\n");
        }
   else
    { p=N%3;
    a=N/3;
    b=N/3;
    c=(N/3)+p;


    if( (a+b)>c || (b+c)>a || (a+c)>b)
    {
        printf("Isosceles\n");
    }
    else
        {
            printf("Invalid\n");
        }
    }
	return 0;
}

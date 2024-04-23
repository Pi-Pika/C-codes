#include<stdio.h>

int main()

{
    int x,y,z,m,o=0;
    scanf("%d",&x);

    if(x%3==0)
    {
        printf("Equilateral\n");
    } else
    {
        if (x>4)
        {
            printf("Isosceles\n");
        } else
        {
            printf("Invalid\n");
        }
    }

    return 0;
}

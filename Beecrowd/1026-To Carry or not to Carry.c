#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int unsigned long a,x;
    while(scanf("%lu %lu",&a,&x)==2)
    {
        printf("%lu\n",a^x);
    }
    return 0;
}


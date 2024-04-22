#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()

{
    int num[5]={10,20,30,40,50};
    char *pointer=num+2;
    printf("Pointer is pointing at %d\n",*pointer);
    printf("The array has started at %d\n",*num);
    return 0;
}

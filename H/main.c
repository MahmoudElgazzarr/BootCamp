#include <stdio.h>
#include <stdlib.h>


int *add(int a,int b);
int main()
{
    int *pointer = add(2,3);
    printf("%d",*pointer);
    return 0;
}


int *add(int a,int b)
{
    static int temp = a+b;
    int *p = &temp;
    return p;
}

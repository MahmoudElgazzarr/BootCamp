#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = mul(5);
    printf("%d",x);
    return 0;
}

int mul(int a)
{
    return (a & 0x80) ? ( (a<<1) ^ 0x1b) : (a<<1);
}

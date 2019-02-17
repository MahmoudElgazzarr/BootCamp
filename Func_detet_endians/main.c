#include <stdio.h>
#include <stdlib.h>

void detect_endians();

int main()
{
    //printf("%d",sizeof(char));

    detect_endians();
    return 0;
}

void detect_endians()
{
    int x = 0x12345678;
    char *ptr = &x;
    printf("%d",*ptr);
}

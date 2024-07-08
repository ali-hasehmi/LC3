#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main()
{
    uint16_t add = 4096;
    // 0b0000010000000000
    // 0b0001000000000000
    int16_t i = 2;
    i = i << 9 ;
    add = add | i;
    printf("%d\n",add);
    return 0;
}
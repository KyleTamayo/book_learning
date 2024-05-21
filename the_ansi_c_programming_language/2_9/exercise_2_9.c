#include <stdio.h>

int bit_count(unsigned x);
int bit_count_plus(unsigned x);

int bit_count_plus(unsigned x)
{
    printf("Before: %b\n", x);
    int b = 0;
    for (b; x != 0; x &= x - 1)
        b++;
    return b;
}


int bit_count(unsigned x)
{
    int b;
    
    for (b = 0; x != 0; x >>= 1)
        if (x & 01)
            b++;
    
    return b;
}

int main()
{
    int num = 500;

    printf("Original:\n\tNum: %d\n\tResult: %b\n", num, bit_count(num));
    printf("Plus Plus:\n\tNum: %d\n\tResult: %b\n", num, bit_count_plus(num));

    return 0;
}
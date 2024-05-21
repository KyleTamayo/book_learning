#include <stdio.h>

int rightrot(int x, int n)
{
    return (x >> n) | (x << (32 - n));
}

int main()
{
    int x = 15;
    int n = 15;
    printf("x = %b\nn = %b\n", x, n);
    printf("x = %b\n", rightrot(x, n));
    return 0;
}

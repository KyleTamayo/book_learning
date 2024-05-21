#include <stdio.h>

int invert(int x, int p, int n);

int invert(int x, int p, int n)
{
    int i;

    printf("%b\n", x);

    for (i = p; i <= n; i++)
        x = x ^ (1 << i);

    return x;
}

int main()
{
    printf("%b\n", invert('a', 0, 4));
    return 0;
}

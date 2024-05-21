#include <stdio.h>
#include <math.h>

long long htoi(char s[]);

long long htoi(char s[])
{
    int i;
    long long total = 0;
    double temp;
    double power = 0.0;

    for(i = 0; s[i] != '\0' && s[i] != EOF; ++i){}

    for(i -= 1; i >= 0 && s[i] != 'x' && s[i] != 'X'; --i)
    {
        if (s[i] >= '0' && s[i] <= '9')
            temp = s[i] - 48;
        else if (s[i] >= 'a' && s[i] <= 'f')
            temp = s[i] - 87;
        else if (s[i] >= 'A' && s[i] <= 'F')
            temp = s[i] - 55;
        total += temp * pow(16.0, power);
        power += 1;
    }

    return total;
}

int main(void)
{
    int i;
    char c;
    char arr[1000];

    scanf("%s", arr);
    
    printf("%lld\n", htoi(arr));

    return 0;
}
#include <stdio.h>

int any(char s1[], char s2[]);

int any(char s1[], char s2[])
{
    int i, j;

    i = j = 0;

    while(s1[i] != '\0')
    {
        while(s2[j] != '\0')
        {
            if (s1[i] == s2[j])
                return i;
            j++;
        }
        j = 0;
        i++;
    }

    return -1;
}

int main(void)
{
    char s1[] = {'a', 'b', 'c', 'r'};
    char s2[] = {'1', '2', '3', 'b'};
    char s3[] = {'c', 'd', 'e', '3'};

    printf("Index:%i\n", any(s1, s2));
    printf("Index:%i\n", any(s2, s3));
    printf("Index:%i\n", any(s1, s3));

    return 0;
}
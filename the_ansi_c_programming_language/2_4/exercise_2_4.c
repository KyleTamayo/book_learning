#include <stdio.h>
#include <string.h>

void squeeze(char s1[], char s2[])
{
    int i, j, k;

    i = j = k = 0;

    while (s1[i] != '\0') 
    {
        while(s2[j] != '\0')
        {
            if (s1[i] == s2[j])
                break;
            j++;
        }
        if (s2[j] == '\0')
            s1[k++] = s1[i];
        i++;
        j = 0;
    }
    s1[k] = '\0';
    printf("%s\n", s1);
}

int main(void)
{
    char s1[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    char s2[] = {'a', 'c', 'e', 'f', 'q', 'f', 'r', 'z'};
    squeeze(s1, s2);

    return 0;
}
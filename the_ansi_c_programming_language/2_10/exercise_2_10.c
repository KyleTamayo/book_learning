#include <stdio.h>
#include <stdlib.h>

#define MAXLENGTH 1000

int main(void);
void lower(char str[]);

void lower(char str[]){
    int i;

    for (i = 0; str[i] != EOF && str[i] != '\n'; i++)
        (str[i] >= 'A' && str[i] <= 'Z') ? str[i] += 32 : str[i];
}

int main(void){
    char str[MAXLENGTH];
    char c;
    int i;

    for (i = 0; i < MAXLENGTH - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        str[i] = c;

    if (c == '\n')
        str[i] = c;
    str[++i] = '\0';

    lower(str);

    for (i = 0; i < MAXLENGTH - 1 && str[i] != EOF; i++)
        printf("%c", str[i]);

    return 0;
}

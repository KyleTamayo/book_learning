#include <stdio.h>

void escape(char s[], char t[]);
int find_length(char t[]);

int find_length(char t[]) {
    int i;
    for (i = 0; t[i] != '\0'; i++){}
    return i;
}

void escape(char s[], char t[]) {
    int i;
    int j;
    int length;

    length = find_length(t);

    for(i = j = 0; i < length - 1; i++) {
        switch(t[i]) {
            case '\t':
                s[j] = '\\';
                s[++j] = 't';
                break;
            case '\n':
                s[j] = '\\';
                s[++j] = 'n';
                break;
            default:
                s[j] = t[i];
                break;
        }
        j++;
    }
}

int main(void) {
    char t[7] = "\tHello\n";
    char s[100];
    int i;

    escape(s, t);

    for(i = 0; i < find_length(s); i++)
        printf("%c", s[i]);

    return 0;
}

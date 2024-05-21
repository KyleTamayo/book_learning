#include <stdio.h>
#include <stdbool.h>

#define TABSTOP 4
#define MAXLENGTH 1000

void printArray(char line[], int len);

void printArray(char line[], int len){
    int i;

    for(i = 0; i <= len; ++i){
        putchar(line[i]);
    }
}

int main() {
    int i;
    int c;
    _Bool firstchar;
    char line[MAXLENGTH];

    firstchar = true;

    for(i = 0; i < MAXLENGTH - 1 && ((c = getchar()) != EOF); ++i){
        if (c != ' ' && c != '\t' && c != '\n' && firstchar){
              firstchar = false;
            while (i % TABSTOP != 0){
                line[i] = ' ';
                ++i;
            }
        }
        if (c == '\t'){
       	    line[i] = ' ';
            while (i % TABSTOP != 0){
                line[i] = ' ';
                ++i;
            }
        } else {
            line[i] = c;
        }
       if (c == '\n'){
           firstchar = true;
           printArray(line, i);
           i = 0;
       }

    }

    return 0;
}

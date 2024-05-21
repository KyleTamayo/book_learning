#include <stdio.h>

#define MAXLENGTH 1000

void print_line(char arr[], int last_pos);

void print_line(char arr[], int last_pos)
{
    int i;

    for (i = last_pos - 1; i >= 0; --i)
        putchar(arr[i]);
    putchar('\n');
}

int main(void)
{
    char arr[MAXLENGTH];
    int i;
    int last_pos;
    char c;

    last_pos = 0;

    for (i = 0; i < MAXLENGTH - 1 && ((c = getchar()) != EOF); ++i)
    {
        if (c == '\n' && last_pos == 0)
            i = -1;
        else if (c == '\n')
        {
            print_line(arr, last_pos);
            i = -1;
            last_pos = 0;
        }
        else
        {
            if (c == ' ' && c != '\t')
                last_pos = i;
            arr[i] = c;
        }
    }

    print_line(arr, last_pos);
}
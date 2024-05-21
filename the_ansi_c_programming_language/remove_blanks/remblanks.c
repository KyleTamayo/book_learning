// Kyle Tamayo
// remove trailing blanks and blank lines

#include <stdio.h>

#define MAXLENGTH 1000

void print_line(char array[], int length);

void print_line(char array[], int length)
{
  int i;

  for (i = 0; i <= length; ++i)
    putchar(array[i]);
  putchar('\n');
}

int main(void)
{
  char array[MAXLENGTH];
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
      print_line(array, last_pos);
      i = -1;
      last_pos = 0;
    }
    else
    {
      if (c != ' ' && c != '\t')
        last_pos = i;
      array[i] = c;
    }
  }

  print_line(array, last_pos);
}

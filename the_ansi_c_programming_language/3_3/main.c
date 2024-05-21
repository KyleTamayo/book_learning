#include <stdio.h>

int get_length(char s[]);
void print_out(char s[]);
void expand(char s1[], char s2[]);
void assign_a(char s1[], char s2[], int start, const int s1_len);
void assign_0(char s1[], char s2[], int start, const int s1_len);

int get_length(char s[])
{
int i = 0;
while (s[i] != '\0')
  i++;
return i;
}

void print_out(char s[])
{
int i;
int length = get_length(s);

for (i = 0; i <= length && s[i] != '\0'; i++)
  printf("%c", s[i]);
printf("\n");
}

void assign_a(char s1[], char s2[], int start, const int s1_len)
{
int i;
for (i = 0; 'a' + i <= s1[s1_len - 1]; i++)
  s2[start++] = 'a' + i;
s2[start] = '\0';
}

void assign_0(char s1[], char s2[], int start, const int s1_len)
{
int i;
for (i = 0; '0' + i <= s1[s1_len - 1]; i++)
  s2[start++] = '0' + i;
s2[start] = '\0';
}

void expand(char s1[], char s2[])
{
int i;
const int s1_len = get_length(s1);
switch (s1[0])
{
case 'a':
  if (s1[s1_len - 1] > 'a' && s1[s1_len - 1] <= 'z')
    assign_a(s1, s2, 0, s1_len);
  else if ((s1[2] > 'a' && s1[2] <= 'z') && (s1[3] >= '0' && s1[5] <= '9'))
  {
    int start = 0;
    assign_a(s1, s2, start, 3);
    start = get_length(s2);
    assign_0(s1, s2, start, 3);
  }
  break;
case '0':
  if (s1[s1_len - 1] > '0' && s1[s1_len - 1 <= '9'])
    assign_0(s1, s2, 0, s1_len);
  break;
default:
  break;
}
}

int main(void)
{
char s1[] = "a-z";
char s2[100];

expand(s1, s2);
print_out(s2);

char s3[] = "0-9";
char s4[100];

expand(s3, s4);
print_out(s4);

char s5[] = "a-z0-9";
char s6[100];

expand(s5, s6);
print_out(s6);

return 0;
}

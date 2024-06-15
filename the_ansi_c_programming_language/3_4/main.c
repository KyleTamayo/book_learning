#include <stdio.h>

void reverse(char s[]) {
    int i;
    for (i = 0; s[i] != '\0'; i++){}
    for (--i; i >= 0; i--){
        printf("%c", s[i]);
    }
}

void itoa(int n, char s[]) {
    int i, sign;
    
    if ((sign = n) < 0) /* record sign */
        n = -n;         /* make n positive */
                        
    i = 0;
    
    do {                       /* generate digits in reverse order */
        s[i++] = n % 10 + '0'; /* get next digit */
    } while ((n /= 10) > 0);   /* delete it */
                               
    if (sign < 0)
        s[i++] = '-';
    
    s[i] = '\0';
    
    reverse(s);
}

int main(void) {
    printf("Hello\n");

    return 0;
}
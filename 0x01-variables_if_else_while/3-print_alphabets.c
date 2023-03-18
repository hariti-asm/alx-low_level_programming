#include <stdio.h>

int main(void)
{
char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
/* print lowercase alphabet*/
for (int i = 0; i < 26; i++)
putchar(lowercase[i]);
/* print uppercase alphabet */
for (int i = 0; i < 26; i++)
{
putchar(uppercase[i]);
}
/* print newline character */
putchar('\n');
return (1);
}


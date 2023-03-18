#include <stdio.h>

int main(void)
{
/*  print lowercase alphabe */
for (char c = 'a'; c <= 'z'; c++)
{
putchar(c);
}

/* print uppercase alphabet */
for (char c = 'A'; c <= 'Z'; c++)
putchar(c);
/* print newline character */
putchar('\n');
return (0);

}


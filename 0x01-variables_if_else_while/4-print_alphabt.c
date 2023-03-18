#include <stdio.h>

int main(void)
{   
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
/*print lowercase alphabet, excluding q and e */
    for (int i = 0; i < 26; i++)
{
if (alphabet[i] != q && alphabet[i] != e)
{
putchar(alphabet[i]);
}
}

/* print newline character */
putchar('\n');

return (0);
}


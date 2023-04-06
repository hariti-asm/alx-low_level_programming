#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
int sum = 0;
for (int i = 1; i < argc; i++)
{
char *ptr = argv[i];
while (*ptr != '\0')
{
if (!isdigit(*ptr))
{
printf("Error\n");
return (1);
}
ptr++;
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}


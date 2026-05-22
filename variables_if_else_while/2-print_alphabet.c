#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;

while (alphabet[i] != '\0')
{
putchar(alphabet[i]);
i++;
}

putchar('\n');
return (0);
}

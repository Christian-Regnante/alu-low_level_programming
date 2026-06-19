#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - test create_array function
 *
 * Return: Always 0
 */
int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');

	if (buffer == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}

	printf("%s\n", buffer);

	free(buffer);

	return (0);
}
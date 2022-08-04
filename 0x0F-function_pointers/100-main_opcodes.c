#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of this program
 * @a: address of the main function
 * @n: number of bytes to print
 * @n: number of bytes to print
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, size;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(argv[1]);
	if (size < 0)
	{
		if (size < 0)
			exit(2);
	}
	for (i = 0; i < size; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < size - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}


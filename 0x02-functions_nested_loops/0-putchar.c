#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "Holberton";

	while (*sh)
	{
		0_putchar(*sh);
		sh++;
	}
	0_putchar('\n');

	return (0);
}

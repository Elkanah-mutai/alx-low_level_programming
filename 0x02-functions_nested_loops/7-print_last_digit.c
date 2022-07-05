#include <limits.h>
#include"main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 *@n: digit to find the last place of.
 *Return: The last digit.
 */
int main(void)
{
	int r;
	r = print_last_digit(INT_MIN);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

#include "main.h"

/**
 * print_line - prints straight line is printed.
 * @n: times staright line is printed.
 * Return: no return
 */
void print_lines(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}

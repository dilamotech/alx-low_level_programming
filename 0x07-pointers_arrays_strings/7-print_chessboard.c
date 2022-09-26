#include "main.h"
/**
 * print_chessboard - print in the terminal the chessboard
 * @a: The character to print
 *
 */
void print_chessboard(char(*a)[8])
{
	int d;
	int f;

	for (d = 0; d < 8; d++)
	{
		for (f = 0; f < 8; f++)
		{
			_putchar(a[d][f]);
		}
		_putchar('\n');
	}
}

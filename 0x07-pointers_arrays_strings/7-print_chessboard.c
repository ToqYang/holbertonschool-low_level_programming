#include "holberton.h"

/**
 * print_chessboard - Print the chessboard
 * @a: Store the array
 */

void print_chessboard(char (*a)[8])
{
	int b = 0, c;

	while (b < 8)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar (a[b][c]);
		}
		_putchar (10);
		b++;
	}
}

#include "holberton.h"
/**
 * jack_bauer - print the hours
 * Return: Nothing
 */
void jack_bauer(void)
{
	int f, s, t, fou;

	for (f = 0; f <= 2; f++)
	{
		for (s = 0; s <= 9; s++)
		{
			for (t = 0; t <= 5; t++)
			{
				for (fou = 0; fou <= 9; fou++)
				{
					if (!(f == 2 && s > 3))
					{
						_putchar(f + '0');
						_putchar(s + '0');
						_putchar(':');
						_putchar(t + '0');
						_putchar(fou + '0');
						_putchar(10);
					}
				}
			}
		}
	}
}

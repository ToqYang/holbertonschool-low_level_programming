#include "holberton.h"

void print_alphabet_x10(void)
{
  int count;
  count = 0;
  while (count < 10)
  {

  int a;
  for (a = 97; a < 123; a++)
    {
      _putchar(a);
    }
  _putchar('\n');
  count++;
  }
}

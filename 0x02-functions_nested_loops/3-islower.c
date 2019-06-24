#include "holberton.h"
/**
 * Int function for know if is _islower character.
 * c is a argument.
 * Return 1 for character, otherwise return 0.
 */
int _islower(int c)
{
  if (c > 97 && c < 123)
    {
      return (1);
    }
  else 
    {
      return (0);
    }
}

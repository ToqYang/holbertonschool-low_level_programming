#include "holberton.h"
/**
 * Function for know if is alpha.
 * Characters from 65-90 [A-Z]. 
 * Characters from 95-122 [a-z].
 * Otherwise return 0.
 */
int _isalpha(int c)
{
  if (c > 64 && c < 91)
    {
      return (1);
    }

  else if (c > 96 && c < 123)
    {
      return (1);
    }

  else
    {
      return (0);
    }
}

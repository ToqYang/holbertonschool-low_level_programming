/**
 * get_bit - Print the index of bit
 * @n: Store the number.
 * @index: Store the index of binary
 * Return: Integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	n >>= index;

	if (n & 1)
	{
		return (1);
	}
	return (0);
}

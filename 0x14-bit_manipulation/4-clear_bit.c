/**
 * clear_bit - Set bits to 0
 * @n: Store
 * @index: Store the index of bit
 * Return: Integer
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask_num = 1;

	if (index > 63)
		return (-1);

	mask_num = ~(mask_num << index);
	*n &= mask_num;

	return (1);
}

#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num, count_bit = 0;
	unsigned long int cur_rent;
	unsigned long int exclu_sive = n ^ m;

	for (num = 63; num >= 0; num--)
	{
		cur_rent = exclu_sive >> num;
		if (cur_rent & 1)
			count_bit++;
	}

	return (count_bit);
}

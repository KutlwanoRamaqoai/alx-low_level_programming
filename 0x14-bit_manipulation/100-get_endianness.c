#include "main.h"

/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num;
	char *b_b;

	num = 1;
	b_b = (char *)&num;
	return (*b_b);
}

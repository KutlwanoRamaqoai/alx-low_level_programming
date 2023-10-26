#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int num;
	unsigned int nu_m_ber;

	nu_m_ber = 0;
	if (!b)
		return (0);
	for (num = 0; b[num] != '\0'; num++)
	{
		if (b[num] != '0' && b[num] != '1')
			return (0);
	}
	for (num = 0; b[num] != '\0'; num++)
	{
		nu_m_ber <<= 1;
		if (b[num] == '1')
			nu_m_ber += 1;
	}
	return (nu_m_ber);
}

#include "main.h"

/**
 * get_endianness -  checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 *
 */
int get_endianness(void)
{
	int test = 1; /* take known value */
	char *c = (char *)&test; /* create char array of mem */

	if (*c == 0x00) /* leading char byte is a zero */
		return (0);
	return (1);
}

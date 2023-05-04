#include "main.h"

/**
 * get_endianness -  checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	/* take known value */
	int test_no = 1;
	/* create char array of memory */
	char *c = (char *)&test_no;

	/* leading char byte is a zero -big */
	if (*c == 0x00)
		return (0);
	return (1); /* leading  char byte is one - little */
}

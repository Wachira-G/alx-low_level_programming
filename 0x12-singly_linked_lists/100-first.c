#include <stdio.h>

void before_main(void) __attribute__((constructor));
/**
 * before_main - runs before main function, printing a string
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

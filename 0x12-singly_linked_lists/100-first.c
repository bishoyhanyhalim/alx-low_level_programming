#include <stdio.h>

/**
 * first - this fun to print test
 *
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

void first(void) __attribute__ ((constructor));

#include "lists.h"
#include <stdio.h>

/**
 * before_main - prints a string before main function
 *               is executed
 */
void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

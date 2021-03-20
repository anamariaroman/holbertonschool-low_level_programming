#include <stdio.h>

/** Calling the function executed before the main function*/
void the_hare(void) __attribute__((constructor));
/**
 * the_hare - Function that prints the string before main function.
 *
 * Return: Nothing.
 */
void the_hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

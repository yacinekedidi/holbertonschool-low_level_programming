#include <stdio.h>


void __attribute__((constructor)) first();
/**
 * first - prints a message before the main function.
 *
 * Return: nothing.
 */

void first(void)
{


	printf("You're beat! and yet, you must allow,\nI
bore my house upon my back!\n");



}

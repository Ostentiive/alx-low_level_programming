/**
 * File: 101-quote.c
 * Author: Ostentiive
 */

#include <unistd.h>

/**
 * main: main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *                	followed by a new line, to standard error.
 *
 * Return: Always 1.
 */

int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, msg, 52);
	return 1;
}

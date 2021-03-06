#include <unistd.h>

/**
 * _putchar - writes a program that prints _putchar
 * followed by new line
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include <unistd.h>

/**
 * _putchar - writes the charater to stdout
 * @c: The charater to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and errno is set appropriatelt.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

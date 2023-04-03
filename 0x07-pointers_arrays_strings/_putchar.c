#include <unistd.h>

/**
 * _putchar - writes a charachter to stdout
 * @c: charachter to be written
 *
 * Return: On success, returns the written charachter, On error,
 * returns -1 and sets errno appropiately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

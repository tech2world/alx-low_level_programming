#include <unistd.h>
/**
 * _putchar - writes the input character c to the stdout
 * @c:The character to be printed.
 *
 * Return: return (1) success
 * On error returns -1 and the errorno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

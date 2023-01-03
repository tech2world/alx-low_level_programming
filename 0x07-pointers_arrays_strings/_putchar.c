#include <unistd.h>

/**
  * _putchar - writes the character out to stdout
  * @c: input character
  *
  * Return: 1 on success
  * else -1, and errro no is set appropriately.
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

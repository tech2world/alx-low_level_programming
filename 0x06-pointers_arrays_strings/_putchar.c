#include <unistd.h>

/**
  * _putchar - writes to the stdout
  * @c: the character
  *
  * Return: 1 on success else -1
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

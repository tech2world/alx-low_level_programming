#include <unistd.h>

/**
  * _printchar - writes the char c to stdout
  * @c: char to print
  * Return: 0 on succes else -1
  *
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

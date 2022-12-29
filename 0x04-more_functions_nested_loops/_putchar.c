#include <unistd.h>

/**
  * _putchar - writes character to stdout
  * @c: character to print
  * Return: 1 success otherwise -1 and set errno appropirately
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

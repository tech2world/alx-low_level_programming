#include <unistd.h>

/**
  * _putchar - writes character to stdout
  * @c: character to print
  * Return: 0 success otherwise -1 and set errno appropirately
  */
int _putchar(char c)
	return (write(1, &c, 1));

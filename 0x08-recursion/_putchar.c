#include <unistd.h>

/**
  * _putchar - writes the char c to the stdout
  * @c: chara to print
  *
  * Return: 1 on success
  * on error -1,errno is set appropriately.
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

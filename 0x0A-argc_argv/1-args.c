#include <stdio.h>

/**
  * main - print num of argument passed to main.
  * @argc: argument count.
  * @argv: argument vector.
  *
  * Return: 0
  */
int main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", argc - 1);
	return (0);
}

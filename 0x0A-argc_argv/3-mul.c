#include <stdlib.h>
#include <stdio.h>

/**
  * main - multiply two numbers.
  * @argc: argument count.
  * @argv: argument vector.
  *
  * Return: 0
  */
int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

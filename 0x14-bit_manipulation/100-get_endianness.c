#include "main.h"
/**
 * get_endianness - checks the endianess
 *
 * Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	y = (char *)&x;
	return (*y);
}

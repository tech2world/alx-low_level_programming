#include "main.h"

/**
 * set_bit - sets bit of a given index to 1
 * @n: pointer to number
 * @index: index of bit to set
 *
 * Return: 1 if successful, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int set;

    if (index > (sizeof(unsigned long int) * 8 - 1))
        return (-1);
    set = 1 << index;
    *n = *n | set;

    return (1);
}
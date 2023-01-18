#include "function_pointers.h"
#include <stdlib.h>

/**
  * print_name - prints a name using function pointer.
  * @name: inputted name.
  * @f: pointer to the print func.
 	 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

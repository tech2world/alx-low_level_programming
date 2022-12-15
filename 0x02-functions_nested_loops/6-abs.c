#include"main.h"
/**
  * _abs - computes the absolute valuea of an integer
  *
  * @i: input integer
  *
  * Return: absolute value
  */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}

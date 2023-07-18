#include "main.h"
/**
  * _islower - returns 1 if the input  is lowercase otherwise return 0
  *
  * @c: The charachter in ASCII code
  *
  * Return: 1 for lowecase otherwise 0
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

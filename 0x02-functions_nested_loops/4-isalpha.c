#include "main.h"
/**
  * _isalpha - checks for alphabetic charachter
  *
  * @c: The charachter in ASCII code
  *
  * Return: 1 for lowecase otherwise 0
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 99))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

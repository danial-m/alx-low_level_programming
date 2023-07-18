#include "main.h"
/**
*_abs - computes the absolute value of an integer
*@i: input number as an integer
*Return: ansolute value
*/
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}

#include "main.h"

/**
 * swap int -> given two integers swap the values they are holding
 * @a: parameter1
 * @b: parameter2
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a -*b;
}

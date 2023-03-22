#include "3-calc.h"

/**
 * op_add - return the sum of two numbers
 * @a: the first addend
 * @b: the second addend
 * Return: the sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference of two number
 * @a: the minuend
 * @b: the subtrahend
 * Return: the difference of @a and @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of two numbers
 * @a: the multiplier
 * @b: the multiplicant
 * Return: the product of @a by @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the quotient of two numbers
 * @a: the divident
 * @b: the divisor
 * Return: the quotient of @a by @b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return the reminder of division of two numbers
 * @a: the divident
 * @b:the divisor
 * Return: the reminder of dividing @a by @b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

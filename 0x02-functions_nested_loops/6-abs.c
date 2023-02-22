/**
 * _abs - compute the absolute value of integer
 *@i: The number to compute
 *Return: The absolute value of the argument
 */
int _abs(int i)
{
	int abs_val;

	if (i >= 0)
		abs_val = i;
	else
		abs_val = i * (-1);

	return (abs_val);
}

#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *@argc: program arguments count
 *@argv: string array of arguments
 *Return: 0 on success.
 *1 on error.
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}

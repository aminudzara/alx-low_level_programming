#include <stdio.h>

/**
 *main - Entry point
 *@argc: program argument count
 *@argv: string array of program arguments
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(void) argv;
	while (i < argc - 1)
		i++;
	printf("%d\n", i);

	return (0);
}

#include <stdio.h>

/**
 *main - Entry point
 *@argc: program arguments count
 *@argv: string array of program arguments
 *
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

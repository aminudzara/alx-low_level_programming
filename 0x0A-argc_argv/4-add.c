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
	int sum;
	int i;

	if (argc < 2)
	{
		puts("0");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			puts("Error");
			return (1);
		}
		if (atoi(argv[i]) < 0)
				continue;
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}

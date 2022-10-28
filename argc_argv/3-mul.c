#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints multiplication
 *of two numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: returns 0
 */

int main(int argc, char *argv[])
{
	int arg1, arg2;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);

	printf("%d\n", (arg1 * arg2));
	return (0);
}

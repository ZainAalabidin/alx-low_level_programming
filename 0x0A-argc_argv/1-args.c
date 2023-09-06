#include <stdio.h>
#include "main.h"

/**
 * main - print number of argument that passs to into it
 * @argc: number of arguments
 * @argv: array of arguments
 *
 *  Return: always 0
 **/
int main(int argc, char *argv[])
{
	(void) argv; /*ignre argv*/
	printf("%d\n", argc - 1);

	return (0);
}

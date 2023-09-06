#include <stdio.h>
#include "main.h"

/**
 * main - function print all argument 
 * @argc: number of arguments
 * @argv: array odf arguments
 *
 * Return: always 0
 **/
int main(int argc, char *argv[])
{
	int i;
	for(i = 1; i < argc; i++);
	{
		printf("%s\n", argv[i];
	}
	return (0);
}


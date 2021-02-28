#include <stdio.h>
/**
 * main - my name is
 * @argc: argc
 * @argv: argv
 * Return: int
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	i = argc - 1;
	printf("%d\n", i);
	return (0);
}

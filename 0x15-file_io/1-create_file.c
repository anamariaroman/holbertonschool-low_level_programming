#include "holberton.h"
/**
* _strlen - size of string
* @str: string
* Return: size of string
*/
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
	}
	return (i);
}
/**
* create_file - crate a file
* @filename: file name
* @text_content: NULL
* Return: 1 or -1
*/
int create_file(const char *filename, char *text_content)
{
	int opn, fd;

	if (filename == NULL)
	{
		return (-1);
	}
	opn = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (opn == -1)
		return (-1);
	if (text_content != NULL)
	{
		fd = write(opn, text_content, _strlen(text_content));
		if (fd < 0)
			return (-1);
	}
	close(opn);
	if (fd == -1)
		return (-1);
	return (1);
}

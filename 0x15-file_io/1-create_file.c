#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: A pointer to the name of the file to create
 * @text_content: A pointer to the NULL terminated string
 *
 * Return: 1 if successful, -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int numF, num, nWrt;


	if (filename == NULL)
		return (-1);
	numF = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (numF == -1)
	{
		close(numF);
		return (-1);
	}
	if (text_content != NULL)
	{
		for (num = 0; text_content[num] != '\0'; num++)
			;
		nWrt = write(numF, text_content, num);
		if (nWrt == -1)
		{
			close(numF);
			return (-1);
		}
	}
	close(numF);
	return (1);
}

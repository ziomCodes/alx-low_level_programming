#include "main.h"

/**
 * append_text_to_file - a function that adds a string to the end of a file
 * @filename: A pointer to the name of a file
 * @text_content: A pointer to a null terminated string
 *
 * Return: 1 if successful, -1 if failed.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fDest, num, nWrt;

	if (filename == NULL)
		return (-1);
	fDest = open(filename, O_WRONLY | O_APPEND);
	if (fDest == -1)
	{
		close(fDest);
		return (-1);
	}
	if (text_content == NULL)
		return (1);
	if (text_content != NULL)
	{
		for (num = 0; text_content[num] != '\0'; num++)
			;
		nWrt = write(fDest, text_content, num);
		if (nWrt == -1)
		{
			close(fDest);
			return (-1);
		}
		return (1);
	}
	close(fDest);
	return (-1);
}

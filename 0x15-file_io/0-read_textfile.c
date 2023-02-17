#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * to the standard output
 * @filename: a pointer that points to the address of the file
 * @letters: The number of characters to be printed to std out
 *
 * Return: All characters of size letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wChar, rChar;
	int numF;
	char *strm;

	if (filename == NULL)
		return (0);
	numF = open(filename, O_RDONLY);
	if (numF == -1)
	{
		close(numF);
		return (0);
	}
	strm = malloc(letters * sizeof(char));
	if (strm == NULL)
	{
		free(strm);
		return (0);
	}
	rChar = read(numF, strm, letters);
	if (rChar == -1)
	{
		close(numF);
		return (0);
	}
	wChar = write(STDOUT_FILENO, strm, rChar);
	if (wChar == -1)
	{
		close(numF);
		return (0);
	}
	close(numF);
	return (wChar);
}

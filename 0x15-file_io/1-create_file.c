#include "main.h"

/**
 * create_file - make file...
 * @filename: name of file...
 * @text_content: make cont in file....
 *
 * Return: 1 if passed... else -1 ...
 */
int create_file(const char *filename, char *text_content)
{
	int sk;
	int numlatte;
	int pnp;

	if (!filename)
		return (-1);

	sk = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (sk == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numlatte = 0; text_content[numlatte]; numlatte++)
		;

	pnp = write(sk, text_content, numlatte);

	if (pnp == -1)
		return (-1);

	close(sk);

	return (1);
}

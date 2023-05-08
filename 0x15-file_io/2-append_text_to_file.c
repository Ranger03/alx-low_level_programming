#include "main.h"

/**
 * append_text_to_file - add txt on file end....
 * @filename: name of file...
 * @text_content: what has been creaeted...
 *
 * Return: 1 if file found... else -1...
 * whatever...
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int sk;
	int numlatte;
	int pnp;

	if (!filename)
		return (-1);

	sk = open(filename, O_WRONLY | O_APPEND);

	if (sk == -1)
		return (-1);

	if (text_content)
	{
		for (numlatte = 0; text_content[numlatte]; numlatte++)
			;

		pnp = write(sk, text_content, numlatte);

		if (pnp == -1)
			return (-1);
	}

	close(sk);

	return (1);
}

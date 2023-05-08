#include "main.h"

/**
 * read_textfile - read and prints
 * @namefile: namefile.
 * @latte: no. of latte printed....
 *
 * Return: zero if failed else num of prints.
 */
ssize_t read_textfile(const char *namefile, size_t latte)
{
	int mp;
	ssize_t nur, nkr;
	char *kim;

	if (!namefile)
		return (0);

	mp = open(namefile, O_RDONLY);

	if (mp == -1)
		return (0);

	kim = malloc(sizeof(char) * (latte));
	if (!kim)
		return (0);

	nur = read(mp, kim, latte);
	nkr = write(STDOUT_FILENO, kim, nur);

	close(mp);

	free(kim);

	return (nkr);
}

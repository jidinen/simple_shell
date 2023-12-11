#include "shell.h"

/**
 **_memset - fills memory with a constant byte
 *@s: the pointer to the memory area
 *@b: the byte to fill *s with
 *@n: the amount of bytes to be filled
 *Return: (s) a pointer to the memory area s
 */
char *_memset(char *si, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		si[i] = b;
	return (si);
}

/**
 * ffree - frees a string of strings
 * @pp: string of strings
 */
void ffree(char **ppx)
{
	char **a = ppx;

	if (!ppx)
		return;
	while (*ppx)
		free(*ppx++);
	free(a);
}

/**
 * _realloc - reallocates a block of memory
 * @ptr: pointer to previous malloc'ated block
 * @old_size: byte size of previous block
 * @new_size: byte size of new block
 *
 * Return: pointer to da ol'block nameen.
 */
void *_realloc(void *ptx, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptx)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptx), NULL);
	if (new_size == old_size)
		return (ptx);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptx)[old_size];
	free(ptx);
	return (p);
}

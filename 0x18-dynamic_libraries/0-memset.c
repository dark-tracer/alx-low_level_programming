
#include "main.h"


/**
 * _memset - Program assigns a given value to a contiguous region of memory
 *@s: starting address of memory to be filled
 *@b: the expected value
 *@n: number of bytes to be changed
 *Return: change array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)

{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
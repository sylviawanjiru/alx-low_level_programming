#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: address to memory block
 * @b: char to be used
 * @n: bytes of the memory
 *
 * Return: pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{	
       while (n)

       {
	       s[n - 1] = b;
	       n--;

       }
       return (s);

}

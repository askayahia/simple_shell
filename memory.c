#include "shell.h"

/**
 * bfree - To free a pointer and NULLs the address !!
 * @ptr: Address of the Pointer to free !
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

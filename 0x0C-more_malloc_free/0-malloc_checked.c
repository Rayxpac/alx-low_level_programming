#include <stdlib.h>
#include "main.h"

/**
 *  * malloc_checked - allocates memory
 *   * @b: number of bytes to be allocated
 *    * Return: pointer to allocated memory, otherwise 98 on failure
 */

void *malloc_checked(unsigned int b)
{
void *current_memory;
current_memory = malloc(b);
if (current_memory == NULL)
exit(98);
return (current_memory);
}


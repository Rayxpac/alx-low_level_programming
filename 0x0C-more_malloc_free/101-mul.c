#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  * _memset - fill memory with constant byte
 *   * @s: pointer to memory block to fill
 *    * @b: characters to fill
 *     * @n: number of bytes to fill
 *      * Return: pointer to filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n--)
*s++ = b;
return (ptr);
}

/**
 *  * _calloc - allocates memory for an array
 *   * @nmemb: an array of elements
 *    * @size: size of the array
 *     * Return: pointer to allocated memory, otherwise 0 if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
_memset(p, 0, nmemb * size);
return (p);
}

/**
 *  * multiply - initialize array with 0 byte
 *   * @s1: string 1
 *    * @s2: string 2
 *     * Return: void
 */

void multiply(char *s1, char *s2)
{
int i, l1, l2, total_l, f_digit, s_digit, res = 0, tmp;
char *ptr;
void *temp;
l1 = _length(s1);
l2 = _length(s2);
tmp = l2;
total_l = l1 + l2;
ptr = _calloc(sizeof(int), total_l);
/* store our pointer address to free later */
temp = ptr;
for (l1--; l1 >= 0; l1--)
{
f_digit = s1[l1] - '0';
res = 0;
l2 = tmp;
for (l2--; l2 >= 0; l2--)
{
s_digit = s2[l2] - '0';
res += ptr[l2 + l1 + 1] + (f_digit * s_digit);
ptr[l1 + l2 + 1] = res % 10;
res /= 10;
}
if (res)
ptr[l1 + l2 + 1] = res % 10;
while (*ptr == 0)
{
ptr++;
total_l--;
}
for (i = 0; i < total_l; i++)
printf("%i", ptr[i]);
printf("\n");
free(temp);
}

/**
 *  * main - multiply two positive integers
 *   * @argc: argument counter
 *    * @argv: argument vector
 *     * Return: 0 on success 98 on failure
 */

int main(int argc, char *argv[])
{
char *n1 = argv[1];
char *n2 = argv[2];
if (argc != 3 || check_number(n1) || check_number(n2))
error_exit();
if (*n1 == '0' || *n2 == '0')
{
_putchar('0');
_putchar('\n');
}
else
multiply(n1, n2);
return (0);
}


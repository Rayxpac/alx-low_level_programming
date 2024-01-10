#include "main.h"

/**
 *  * _print_rev_recursion - print a string in reverse
 *   *
 *    * @s: the string to print
 *     *
 *      * Return: void
 */

void _print_rev_recursion(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
for (int i = length - 1; i > 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}

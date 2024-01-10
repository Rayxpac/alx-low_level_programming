#include "main.h"

/**
 *  * _puts_recursion - function that prints a string
 *   *
 *    * @s: the string to be printed
 *     *
 *      * Return: void
 */

void _puts_recursion(char *s)
{
while (*s != '\0')
{
putchar(*s);
*s++;
}
putchar('\n');
}

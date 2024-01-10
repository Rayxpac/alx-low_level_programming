#include "main.h"

/**
 *  * _sqrt_recursion - get natural sqrt
 *   *
 *    * @n: the number to get sqrt
 *     *
 *      * Return: integer, the sqrt
 */

#include <stdio.h>

#include <math.h>

int _sqrt_recursion(int n)
{
return (sq(n, 1));
}
int sq(int n, int base)
{
if (base * base == n)
{
return (base);
}
else if (base * base < n)
{
return (sq(n, base + 1));
}
else
{
return (-1);
}
}

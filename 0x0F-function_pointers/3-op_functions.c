#include <stdio.h>
#include <stdlib.h>

/**
 *  * op_add - function that performs addition
 *   * @a: an integer
 *    * @b: an integer
 *     * Return: a + b
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 *  * op_sub - function that performs subtraction
 *   * @a: an integer
 *    * @b: an integer
 *     * Return: a - b
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 *  * op_mul - function that performs multiplication
 *   * @a: an integer
 *    * @b: an integer
 *     * Return: a * b
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 *  * op_div - function that performs division
 *   * @a: an integer
 *    * @b: an integer
 *     * Return: a / b
 */

int op_div(int a, int b)
{
if (b)
{
return (a / b);
}
printf("Error\n");
exit(100);
}

/**
 *  * op_mod - function that performs modulo
 *   * @a: an integer
 *    * @b: an integer
 *     * Return: a % b
 */

int op_mod(int a, int b)
{
if (b)
{
return (a % b);
}
printf("Error\n");
exit(100);
}

#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 *  * main - entry point
 *   * @argc: argument counter
 *    * @argv: argument vector
 *     * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
i = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", i);
return (0);
}

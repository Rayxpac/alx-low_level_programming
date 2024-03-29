#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  * _strlen - gets length of a string
 *   * @s: the sring
 *    * Return: int
 */
int _strlen(char *s)
{
int len = 0;
for (; s[len] != '\0'; len++)
;
return (len);
}

/**
 *  * str_concat - concatenates 2 strings
 *   * @s1: first string
 *    * @s2: second string
 *     * Return: pointer to concatenated string, otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{
int len1, len2, i;
char *m;
if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";
len1 = _strlen(s1);
len2 = _strlen(s2);
m = malloc((len1 + len2) *sizeof(char) + 1);
if (m == 0)
return (0);
for (i = 0; i <= len1 + len2; i++)
{
if (i < len1)
m[i] = s1[i];
else
m[i] = s2[i - len1];
}
m[i] = '\0';
return (m);
}


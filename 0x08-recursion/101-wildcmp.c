#include "main.h"
/**
 *  * strlen_with_no_wilds - gets the length of a string,
 *   *                   ignoring wildcard characters
 *    * @str: The string to be measured
 *     * Return: The length
 */
int strlen_with_no_wilds(char *str)
{
int len = 0, index = 0;
if (*(str + index))
{
if (*str != '*')
len++;
index++;
len += strlen_with_no_wilds(str + index);
}
return (len);
}
/**
 *  * loop_wild - loops over a string located at a wildcard
 *   *                until it points to a non-wildcard character.
 *    * @wildstr: The string to be iterated through.
 */
void loop_wild(char **wildstr)
{
if (**wildstr == '*')
{
(*wildstr)++;
loop_wild(wildstr);
}
}
/**
 *  * postfix_match - Checks if a string matches the postfix of
 *   another string potentially containing wildcards.
 *    * @str: The string to be matched.
 *     * @postfix: The postfix. Return: If str and postfix are identical
 */
char *postfix_match(char *str, char *postfix)
{
int str_len = strlen_with_no_wilds(str) - 1;
int postfix_len = strlen_with_no_wilds(postfix) - 1;
if (*postfix == '*')
loop_wild(&postfix);
if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
{
postfix++;
return (postfix_match(str, postfix));
}
return (postfix);
}
/**
 * wildcmp - Compares two strings, considering wildcard characters.
 * @s1: The first string to be compared.
 *@s2: The second string to be compared - may contain wildcards.
 * Return: If the strings can be considered identical - 1.
 *Otherwise - 0.
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
loop_wild(&s2);
s2 = postfix_match(s1, s2);
}
if (*s2 == '\0')
return (1);
if (*s1 != *s2)
return (0);
return (wildcmp(++s1, ++s2));
}

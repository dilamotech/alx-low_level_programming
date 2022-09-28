#include "holberton.h"

/**
* _strlen_recursion - returns the length of string
* @s: string whose length is to be returned
*
* Return: length of s
*/
int _strlen_recursion(char *s)
{
	int length = 1;

	if (*s == '\0')
		return (0);
	return (length + _strlen_recursion(s + length));
}

/**
* helper - check whther palindrome or not
* @str: string to check
@@ -10,13 +25,11 @@
*/
int helper(char *str, int i, int j)
{
	if (i == j)
	if (i >= j)
		return (1);
	if (str[i] != str[j])
		return (0);
	if (i < j + 1)
		return (helper(str, i + 1, j - 1));
	return (1);
	return (helper(str, i + 1, j - 1));
}

/**
@@ -27,12 +40,11 @@ int helper(char *str, int i, int j)
*/
int is_palindrome(char *s)
{
	int length = 0;
	int i = 0;

	while (s[length] != '\0')
		length++;
	i = _strlen_recursion(s) - 1;

	if (length == 0)
	if (!*s)
		return (1);
	return (helper(s, 0, length - 1));
	return (helper(s, 0, i));
}

#include "main.h"

/**
  * is_palindrome_helper - helper
  * @s: string
  * @start: start
  * @end: end
  *
  * Return: 1 if palindrome, 0 otherwise
  */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
  * is_palindrome - is palindrome
  * @s: string
  *
  * Return: 1 if palindrome, 0 otherwise
  */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length == 0)
		return (1);

	return (is_palindrome_helper(s, 0, length - 1));
}

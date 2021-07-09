int len(char *, int i);
int cmp(char *, int, int);

/**
 * is_palindrome - tells if a string is palindrome
 * @s: given string
 * Return: 1 if is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (cmp(s, len(s, 0) - 1, 0));
}

/**
 * len - gets the length of the string s
 * @s: given string
 * @i: position in the string
 * Return: lenght
 */

int len(char *s, int i)
{
	if (s[i] == '\0')
		return (0);
	return (1 + len(s, i + 1));
}

/**
 * cmp - compares the inital and final chars, and moves
 * the positions until they meet
 * @s: given string
 * @end: final position
 * @i: initial position
 * Return: 1 if palindrome, 0 otherwise
 */

int cmp(char *s, int end, int i)
{
	if (i > end)
		return (1);
	if (s[i] == s[end])
		return (cmp(s, end - 1, i + 1));
	else
		return (0);
}

int root(int, int);

/**
 * _sqrt_recursion - returns the natural square root a number
 * @n: given number
 * Return: root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (root(n, 0));
}

/**
 * root - finds the root of a number n
 * @n: given number
 * @i: root
 * Return: root
 */

int root(int n, int i)
{
	if ((i * i) == n)
		return (i);
	if (i == n)
		return (-1);
	return (root(n, i + 1));
}

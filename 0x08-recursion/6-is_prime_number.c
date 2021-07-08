/**
 * test_numbers - test numbers from 2 to n to see if it is
 * divisible by any number between 2 and n
 * @n: given number
 * @i: number to test
 * Return: 1 if found, 0 otherwise
 */

int test_numbers(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i != 0)
		return (test_numbers(n, i + 1));
	else
		return (0);
}

/**
 * is_prime_number - detects if n is prime
 * @n: given number
 * Return: 1 if it is, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (test_numbers(n, 2));
}

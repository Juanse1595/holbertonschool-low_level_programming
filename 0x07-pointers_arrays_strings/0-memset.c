/**
 * _memset - sets an specific byte in a pointed space in
 * memory
 * @s: pointer
 * @b: char to be located
 * @n: number of bytes to be setted
 * Return: pointer to the setted location
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

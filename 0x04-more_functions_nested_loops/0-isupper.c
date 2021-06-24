/**
 * _isupper - Tells if a char is uppercase or not
 * @c: given char
 * Return: 1 if uppecarse, 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}

/**
 * string_toupper - Turns lowercase letters to uppercase
 * @str: given string
 * Return: pointer to the changed string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] <= 122 && str[i] >= 97)
			str[i] -= 32;
	}
	return (str);
}

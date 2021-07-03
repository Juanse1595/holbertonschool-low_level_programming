/**
 * cap_string - Capitalize a string
 * @str: given string
 * Return: a pointer to the resulting string
 */

char *cap_string(char *str)
{
	int i;

	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] -= 32;
	}
	for (i = 1; str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			if (str[i - 1] == ' ' || str[i - 1] == '\t' ||
					str[i - 1] == '\n' || str[i - 1]
					== ',' || str[i - 1] == ';' ||
					str[i - 1] == '.' || str[i - 1]
					== '!' || str[i - 1] == '?' ||
					str[i - 1] == '"' || str[i - 1]
					== '(' || str[i - 1] == ')' ||
					str[i - 1] == '{' || str[i - 1]
					== '}')
			{
				str[i] -= 32;
			}
	}
	return (str);
}

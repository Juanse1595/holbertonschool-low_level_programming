/**
 * leet - Changes some letters for numbers
 * @s: given string
 * Return: a pointer to the changed string
 */

char *leet(char *s)
{
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (s[i] == letters[j])
				s[i] = numbers[j];
		}
	}
	return (s);
}

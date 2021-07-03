/**
 * leet - Changes some letters for numbers
 * @s - given string
 * Return: a pointer to the changed string
 */

char *leet(char *s)
{
	char *letters = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char *numbers = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
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

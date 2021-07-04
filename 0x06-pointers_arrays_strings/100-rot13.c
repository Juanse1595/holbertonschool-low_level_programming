/**
 * rot13 - using rot13 condes a string
 * @s: given string
 * Return: a pointer to the string
 */

char *rot13(char *s)
{
	char *arr1 = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *arr2 = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int i, j;


	for (i = 0; s[i]; i++)
	{
		for (j = 0; arr1[j]; j++)
		{
			if (s[i] == arr1[j])
			{
				s[i] = arr2[j];
				j = 52;
			}
		}
	}
	return (s);
}

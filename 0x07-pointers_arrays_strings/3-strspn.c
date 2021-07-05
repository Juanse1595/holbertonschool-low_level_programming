/**
 * _strspn - gets the length of a prefix substring
 * @s: given string
 * @accept: string with the acceptable chars to count
 * Return: the resultiing count
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count1, count2;

	count1 = 1;
	count2 = 0;
	for (i = 0; count1 != 0 && s[i]; i++)
	{
		count1 = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count1++;
				count2++;
			}
		}
	}
	return (count2);
}

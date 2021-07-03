/**
 * reverse_array - reverse an array of ints
 * @a: pointer to the array
 * @n: number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tmp;
	
	n--;
	for (i = 0; i < n; i++, n--)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}

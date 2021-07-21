/**
 * print_name - prints a name
 * @name: name to print
 * @f: function that prints
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}

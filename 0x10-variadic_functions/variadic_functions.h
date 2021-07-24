#ifndef VAR_H
#define VAR_H
#include <stdarg.h>

/**
 * struct t - t has a string to be compaired and a name
 * of a function to be redirected
 * @a: string to be compared
 * @funp: function to be pointed
 */

typedef struct t
{
	char *a;
	void (*funp)();
} type_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VAR_H */

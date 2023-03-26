#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct idn - stucture
 * @id: a character
 * @rep: a pointer to an array of chars
 */
typedef struct idn
{
	char id;
	char *rep;
} identfs;
#endif

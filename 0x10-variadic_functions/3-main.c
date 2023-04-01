#include <stddef.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    print_all("fcsi", 3.14435, 'H', NULL, 402);
    print_all(NULL);
    return (0);
}

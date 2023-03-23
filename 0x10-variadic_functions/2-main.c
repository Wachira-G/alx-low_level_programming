#include "variadic_functions.h"
#include <stddef.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    print_strings(", ", 3, "Jay", "", "Django"); /* empty string*/
    print_strings("* ", 2, "Jay", "Django");/*another separator*/
    print_strings(", ", 2, NULL, "Django");/*string is a null */
    print_strings(", ", 4, "Jay", "Django", "mwingine", NULL); /* null ending*/
    print_strings(", ", 0, "Jay", "Django", "mwingine"); /*zero size*/
/*    print_strings(", ", NULL, "Jay", "Django"); null size*/

    return (0);
}

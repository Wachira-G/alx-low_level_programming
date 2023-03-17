#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat, *concat1, *concat2, *concat3;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);

    concat1 = string_nconcat(NULL, "School !!!", 6);
    printf("%s\n", concat1);
    free(concat1);

    concat2 = string_nconcat("Best ", NULL, 6);
    printf("%s\n", concat2);
    free(concat2);

    concat3 = string_nconcat(NULL, NULL, 6);
    printf("%s\n", concat3);
    free(concat3);
    return (0);
}

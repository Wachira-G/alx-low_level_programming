#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;
    int k;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    k = ABS(1024 - 2048);
    printf("%d, %d, %d\n", i, j, k);
    return (0);
}

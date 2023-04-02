#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;
    struct dog my_dogg;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);


    my_dogg.name = NULL;
    my_dogg.age = -1;
    my_dogg.owner = NULL;
    print_dog(&my_dogg);
    return (0);
}

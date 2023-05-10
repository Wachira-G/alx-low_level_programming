#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - entry into the program
 * @argc: argument count
 * @argv: argument vector- an arraty of arguments as strings
 * Return: 0 Always
 *
 * INSTRUCTIONS
 * This file should contain your main function only.
 * You are not allowed to code any other function than main in this file
 * You are not allowed to directly call op_add, op_sub, op_mul,
 * *op_div or op_mod from the main function
 * You have to use atoi to convert arguments to int
 * You are not allowed to use any kind of loop
 * You are allowed to use a maximum of 3 if statements
 *
 *
 * The program prints the result of the operation, followed by a new line
 * You can assume that the result of all operations can be stored in an int
 * if the number of arguments is wrong, print Error,
 *    followed by a new line, and exit with the status 98
 * if the operator is none of the above, print Error,
 *    followed by a new line, and exit with the status 99
 * if the user tries to divide (/ or %) by 0, print Error,
 *    followed by a new line, and exit with the status 100
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func_ptr = get_op_func(argv[2]);

	if (func_ptr == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func_ptr(num1, num2);
	printf("%d\n", result);

	return (0);
}

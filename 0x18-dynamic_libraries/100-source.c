
/**
 * add - addds two numbers
 * @a: first number
 * @b:second number
 * Return: the result of the addition
 */
int add(int a, int b)
{
	int result = 0;

	result = a + b;

	return (result);
}

/**
 * sub - subracts two numbers
 * @a: first number
 * @b:second number
 * Return: the result of the subraction
 */
int sub(int a, int b)
{
	int result = 0;

	result = a - b;

	return (result);
}

/**
 * mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: the result of the multiplication
 */
int mul(int a, int b)
{
	int result = 0;

	result = a * b;

	return (result);
}

/**
 * div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: the result of the division
 */
int div(int a, int b)
{
	int result = 0;

	if (b == 0)
		return (0);
	result = a / b;

	return (result);
}

/**
 * mod - calculates the modulus (remainder) of two numbers
 * @a: first number
 * @b: second number
 * Return: the result of the modulus operation (remainder)
 */
int mod(int a, int b)
{
	int result = 0;

	if (b == 0)
		return (0);
	result = (a % b);

	return (result);
}

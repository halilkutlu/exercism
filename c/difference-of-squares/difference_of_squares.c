#include "difference_of_squares.h"

unsigned int	sum_of_numbers(unsigned int number)
{
	if (number <= 0)
		return (0);
	return (number + sum_of_numbers(number - 1));
}

unsigned int square_of_sum(unsigned int number)
{
	unsigned int sum;

	sum = sum_of_numbers(number);
	return (sum * sum);
}

unsigned int sum_of_squares(unsigned int number)
{
	if (number <= 0)
		return (0);
	return (number * number + sum_of_squares(number - 1));
}

unsigned int difference_of_squares(unsigned int number)
{
	return (square_of_sum(number) - sum_of_squares(number));
}

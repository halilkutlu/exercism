#include "grains.h"

uint64_t square(uint8_t index)
{
	if (index == 1)
		return (1);
	return (2 * square(index - 1));
}

uint64_t total(void)
{
	int	index;
	uint64_t	result;

	index = 1;
	result = 0;
	while (index <= 64)
	{
		result += square(index);
		index++;
	}
	return (result);
}

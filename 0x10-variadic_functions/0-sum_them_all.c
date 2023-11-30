#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of integer argument passed
 * Return: interger
 */

int sum_them_all(const unsigned int n, ...)

{

	unsigned int i;
	int result = 0;
	va_list nums;

	va_start(nums, n);

	for (i=0, i<n, i++){
		result += va_arg(nums, unsigned int)
}

	va_end(nums);
	return (result);

}

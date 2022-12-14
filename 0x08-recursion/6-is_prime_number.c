#include "main.h"
/**
 * is_prime_number: identifies prime number
 * @n: number to evaluate if is prime
 *
 * Return 1 if n is prime 0 otherwise
 */
int is_prime_number(int n)
{
	int emp = 2;
	
	if (n % emp == 0)
		return(0);
	if (n <= 2)
		return(1);
	if (emp * emp > n)
		return(1);
	return(is_prime_number(n, emp + 1));
}

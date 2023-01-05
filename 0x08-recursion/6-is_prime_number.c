#include "main.h"
/**
 * is_prime_number: identifies prime number
 * @n: number to evaluate if is prime
 *
 * Return 1 if n is prime 0 otherwise
 */
int is_prime_number(int n)
{
	int emp = n / 2;

	if (n <= 1)
		return(0);
	return(is_prime(n, emp));
}
/**
 * is_prime: returns 1 if n is prime
 * @n: number to be analyzed
 * @emp: number to start checking from
 *
 * Return 1 if n is prime 0 otherwise
 */
int is_prime(int n, int emp)
{
	if (emp <= 1)
		return(1);
	else if (n % emp == 0)
		return(0);
	return(is_prime(n, emp - 1));
}

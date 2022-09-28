     1	#include "main.h"
     2	int is_divisible(int num, int div);
     3	
     4	/**
     5	 * is_prime_number - Afunction that checks if a number is prime.
     6	 * @n: an input integer
     7	 * Return: 1 if n is prime or  0 in otherwise
     8	 */
     9	int is_prime_number(int n)
    10	{
    11		int div = 2;
    12	
    13		if (n <= 1)
    14			return (0);
    15	
    16		if (n <= 3)
    17			return (1);
    18	
    19		return (is_divisible(n, div));
    20	}
    21	
    22	/**
    23	 * is_divisible - check if num is divisible
    24	 * @num: the number to be checked
    25	 * @div: the result of division
    26	 * Return: 1 if num is divisible or 0 if numis not divisible
    27	 */
    28	int is_divisible(int num, int div)
    29	{
    30		if (num % div == 0)
    31			return (0);
    32	
    33		if (div == num / 2)
    34			return (1);
    35	
    36		return (is_divisible(num, div + 1));
    37	}

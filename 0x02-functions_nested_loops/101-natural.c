#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the sum of all the multiples of 3 or 5 below 1024.
 *
 * A variant of the arithmetic progression, given by:
 *    x = a + (n - 1) * d          (1)
 * Where x = final term of the sequence, a = first term of the sequence
 * and d = the common difference between members.
 *
 * Also, the sum of the arithmetic progression (or arithmetic series) is
 * given by:
 *    S = ((n * (a + x)) / 2       (2)
 *
 * Knowing that a = d (3), because of the requirements of the problem,
 * then replacing that in (1):
 *    n = int(x / d)               (4)
 * The above division must be floored (integer division). That is,
 * stripping any decimals from the quotient if needed.
 * Then the last term would be (4) and (3) in (1):
 *    x = d + (int((x / d)) - 1) * d
 *    x = d * int(x / d)           (5)
 *
 * Now replacing (5), (3) and (4) into (2):
 *    S = (int(x / d) * (d + (d * int(x / d)))) / 2
 *    S = ((d * int(x / d)) + (d * (int(x / d))^2)) / 2
 *    S = ((d * int(x / d)) * (1 + int(x / d))) / 2
 *
 * The only thing missing is to sum all multiples, in which we
 * substract the common multiples from 3 and 5 (the multiples of 15)
 * from the other 2 and that's our answer. Much like a Venn diagram.
 *
 * Wikipedia link: https://en.wikipedia.org/wiki/Arithmetic_progression
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int multiple_sum_3, multiple_sum_5, multiple_sum_15, limit, sum;

	limit = 1023;

	multiple_sum_3 = ((3 * (limit / 3)) * (1 + (limit / 3))) / 2;
	multiple_sum_5 = ((5 * (limit / 5)) * (1 + (limit / 5))) / 2;
	multiple_sum_15 = ((15 * (limit / 15)) * (1 + (limit / 15))) / 2;

	sum = multiple_sum_3 + multiple_sum_5 - multiple_sum_15;

	printf("%d\n", sum);

	return (0);
}

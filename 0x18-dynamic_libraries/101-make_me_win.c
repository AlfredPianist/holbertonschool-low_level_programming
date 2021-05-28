/*
 * Static int to keep tabs of the number returned by rand, knowing that
 * rand doesn't have any arguments.
 */
static int iter = 0;

/**
 * rand - Replaces the rand function used in the pick_numbers function
 *        inside the gm executable to force jackpot when numbers
 *        9 8 10 24 75 9 are entered, being the first five the array
 *        of ints and the last one the bonus int.
 *
 * Return: Each of the numbers called by rand in the order called by the
 *         pick_numbers function. First the bonus, and after that the array.
 */
int rand(void)
{
	/*
	 * Because each number in the function pick_numbers is asigned to the
	 * operation of the number modulo another one (75 for the array ones
	 * and 15 for the bonus) + 1, then it's enough to just write the
	 * jackpot numbers - 1 and that would be it.
	 */
	int num[] = {8, 8, 7, 9, 23, 74};

	return (num[iter++]);
}

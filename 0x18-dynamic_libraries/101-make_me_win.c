#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

static int iter = 0;

int rand()
{
	int num[] = {8, 8, 7, 9, 23, 74};

	return (num[iter++]);
}

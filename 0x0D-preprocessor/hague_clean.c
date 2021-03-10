#include <stdio.h>

char array[] = "ETIANMSURWDKGOHVFaLaPJBXCYZQb54a3d2f16g7c8a90l?e'b.s;i,d:";

main()
{
	char *input, *curr_c, *curr_to_m, *p_array, *malloc(), *gets();

	for (input = malloc(81), curr_to_m = input++;
	     input == gets(input);
	     _write('\n'))
		for (curr_c = input;
		     *curr_c;
		     _write(*p_array ? morse(*curr_to_m) : '?'), _write(' '), curr_c++)
			for (*curr_to_m = 2, p_array = array;
			     *p_array && (*p_array != (*curr_c >= 'a' ? *curr_c & 223 : *curr_c));
			     (*curr_to_m)++, p_array++)
				*curr_to_m += (*p_array >= 'a' ? *p_array - 'a' : 0);
}

morse(curr_c)
{
	_write(curr_c > 3 ? morse(curr_c >> 1) : '\0');
	return (curr_c & 1 ? '-' : '.');
}

_write(curr_c) char curr_c;
{
	(void) write(1, &curr_c, 1);
}

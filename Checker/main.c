#include "checker_bonus.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char	*p;
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1) // if no arguments is give, the program stops
		return (0);
	// else 1) parse the arguments
	//      2) read the actions from the standard output
	//      3) store the actions
	//      4) execute the actions
	//      5) > "OK\n" is returned then if sorted
	//         > "KO\n" if not
	(void)stack_b;
	parser(argc, argv, &stack_a);
	p = get_next_line(0);
	printf(">> %s", p);
	return (0);
}
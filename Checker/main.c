#include "checker_bonus.h"
#include <stdio.h>

char	*actions_reader()
{
	char	*action;
	char	*actions;
	char	**splitted_actions;

	action = get_next_line(0);
	actions = NULL;
	while (action)
	{
		actions = ft_strjoin(actions, action); // check for leaks
		free(action);
		action = get_next_line(0); // leaks won't be found
	}
	splitted_actions = ft_split(actions, '\n');
	free(actions);
	// we have a string of actions separated by '\n'
	// > split it and free actions pointer
	// return a 2d a array in order 
	return (actions);
}

int main(int argc, char **argv)
{
	char	**p;
	char	*actions; // tmp
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	(void)stack_b;
	(void)p;
	if (argc == 1) // if no arguments is give, the program stops
		return (0);
	// else 1) parse the arguments (Done)
	//      2) read the actions from the standard output (ON GOING)
	//      3) store the actions
	//      4) execute the actions
	//      5) > "OK\n" is returned then if sorted
	//         > "KO\n" if not
	parser(argc, argv, &stack_a);
	actions = actions_reader();
	(void)actions;
	return (0);
}
#include "checker_bonus.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void		parsing_ko(t_list **sa, t_list **sb, t_action **lst)
{
	ft_lstclear(sa, del);
	ft_lstclear(sb, del);
	checker_lstclear(lst, del);
	write(1, "KO", 2);
	exit(1);
}

int	sorted(t_list *lst)
{
	while (lst && lst->next)
	{
		if (lst->content > lst->next->content)
			return (0);
		lst = lst->next;
	}
	return (1);
}

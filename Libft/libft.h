/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <aouaalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:24:47 by aouaalla          #+#    #+#             */
/*   Updated: 2024/11/12 09:33:17 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack
{
	struct s_stack	*next;
	int				content;
	int				index;
	int				pos;
}	t_list;

int		ft_isdigit(int c);
size_t	ft_strlen(const char *s);
long	ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstadd_back(t_list **lst, t_list *new);

#endif

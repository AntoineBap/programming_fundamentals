/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-01 09:36:42 by abaptist          #+#    #+#             */
/*   Updated: 2026-05-01 09:36:42 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*maillon;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	maillon = *lst;
	while (maillon->next != NULL)
		maillon = maillon->next;
	maillon->next = new;
}

/* #include <stdio.h>
int main(void)
{
	t_list	*lst;
	t_list	*a;
	t_list	*b;
	t_list	*c;

	lst = NULL;
	a = ft_lstnew("1er");
	ft_lstadd_back(&lst, a);
	printf("%s (attendu: 1er)\n", (char *)lst->content);

	b = ft_lstnew("2e");
	ft_lstadd_back(&lst, b);
	printf("%s (attendu: 2e)\n", (char *)ft_lstlast(lst)->content);

	c = ft_lstnew("3e");
	ft_lstadd_back(&lst, c);
	printf("%s (attendu: 3e)\n", (char *)ft_lstlast(lst)->content);

	free(a);
	free(b);
	free(c);

	return (0);
} */

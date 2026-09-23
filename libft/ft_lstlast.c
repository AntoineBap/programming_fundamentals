/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-01 09:24:55 by abaptist          #+#    #+#             */
/*   Updated: 2026-05-01 09:24:55 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*maillon;

	if (!lst)
		return (NULL);
	maillon = lst;
	while (maillon->next != NULL)
		maillon = maillon->next;
	return (maillon);
}

/* #include <stdio.h>
int main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = ft_lstnew("1er");
	b = ft_lstnew("2e");
	c = ft_lstnew("3e");

	a->next = b;
	b->next = c;

	printf("%s (attendu: 3e)\n", (char *)ft_lstlast(a)->content);
	free(a);
	free(b);
	free(c);

	a = ft_lstnew("seul");
	printf("%s (attendu: seul)\n", (char *)ft_lstlast(a)->content);
	free(a);

	printf("%p (attendu: nil)\n", ft_lstlast(NULL));

	return (0);
} */

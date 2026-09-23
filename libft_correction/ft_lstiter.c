/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-01 10:11:19 by abaptist          #+#    #+#             */
/*   Updated: 2026-05-01 10:11:19 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* #include <stdio.h>
void	to_upper_print(void *content)
{
	char *s = (char *)content;
	int  i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	printf("%s\n", s);
}

int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = ft_lstnew(ft_strdup("hello"));
	b = ft_lstnew(ft_strdup("world"));
	c = ft_lstnew(ft_strdup("42"));
	a->next = b;
	b->next = c;

	ft_lstiter(a, to_upper_print);

	free(a->content);
	free(b->content);
	free(c->content);
	free(a);
	free(b);
	free(c);

	return (0);
}
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-01 09:12:00 by abaptist          #+#    #+#             */
/*   Updated: 2026-05-01 09:12:00 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*maillon;
	int		i;

	maillon = lst;
	i = 0;
	while (maillon)
	{
		maillon = maillon->next;
		i++;
	}
	return (i);
}

/* #include <stdio.h>
int main(void)
{
    t_list *a;
    t_list *b;
    t_list *c;

    a = ft_lstnew("1er");
    b = ft_lstnew("2e");
    c = ft_lstnew("3e");
    a->next = b;
    b->next = c;
    printf("%d (attendu: 3)\n", ft_lstsize(a));
    free(a);
    free(b);
    free(c);

    a = ft_lstnew("seul");
    printf("%d (attendu: 1)\n", ft_lstsize(a));
    free(a);

    printf("%d (attendu: 0)\n", ft_lstsize(NULL));

    return (0);
} */
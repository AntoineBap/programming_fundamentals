/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-01 08:51:52 by abaptist          #+#    #+#             */
/*   Updated: 2026-05-01 08:51:52 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}

/* #include <stdio.h>
int main(void)
{
    t_list *elem;

    int n = 42;
    elem = ft_lstnew(&n);
    printf("Test 1: content=%d next=%p (attendu: 42 / NULL)\n",
        *(int *)elem->content, elem->next);
    free(elem);

    elem = ft_lstnew("hello");
    printf("Test 2: content=%s next=%p (attendu: hello / NULL)\n",
        (char *)elem->content, elem->next);
    free(elem);

    elem = ft_lstnew(NULL);
    printf("Test 3: content=%p next=%p (attendu: NULL / NULL)\n",
        elem->content, elem->next);
    free(elem);

    return (0);
} */
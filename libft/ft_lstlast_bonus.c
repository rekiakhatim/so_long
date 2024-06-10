/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:40:07 by rkhatim           #+#    #+#             */
/*   Updated: 2023/11/25 13:53:02 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list *node_1;
// 	int n;
// 	int n1;

// 	n = 42;
// 	n1 = 1337;
// 	node_1 = malloc(sizeof(t_list));
// 	node_1->next = malloc(sizeof(t_list));

// 	node_1->content = &n;
// 	node_1->next->content = &n1;
// 	node_1->next->next = NULL;

// 	t_list *lastnode;

// 	lastnode = ft_lstlast(node_1);
// 	printf("%d", *(int *)lastnode->content);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:45:45 by rkhatim           #+#    #+#             */
/*   Updated: 2023/11/27 16:31:42 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		++size;
	}
	return (size);
}

// int	main(void)
// {
//     t_list	*node_1;
// 	int	n = 5;
// 	int	n1 = 4;

// 	node_1 = malloc(sizeof(t_list));
// 	node_1->next = malloc(sizeof(t_list));
// 	node_1->content = &n;
// 	node_1->next->content = &n1;
// 	node_1->next->next = NULL;
// 	printf("%d",ft_lstsize(node_1));
// 	return (0);
// }
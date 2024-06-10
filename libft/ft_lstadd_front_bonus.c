/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:52:42 by rkhatim           #+#    #+#             */
/*   Updated: 2023/11/27 16:31:16 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

// int	main(void)
// {
//     t_list *node1;
//     t_list *node2;
//     t_list **lst ;
//     t_list *new;

//     int a = 13;
//     int  b = 15;
//     int c=89;
//     node1=malloc(sizeof(t_list));
//     node1 -> next = malloc(sizeof(t_list));
//     new = malloc(sizeof(t_list));
//     node1 -> content = &a;
//     node1 -> next -> content = &b;
//     node1 -> next = node2;
//     node1 -> next -> next = NULL;
//     new -> content = &c;
//     new -> next = NULL;
//     lst = &node1;
//     ft_lstadd_front(lst,new);
//     while (node1)
//     {
//           printf("%d\n",*(int *) node1 -> content);
//           node1 = node1 -> next;
//     }
// }
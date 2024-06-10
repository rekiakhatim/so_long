/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:17:06 by rkhatim           #+#    #+#             */
/*   Updated: 2023/12/01 22:10:05 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
// void	my_func(unsigned int i, char *c)
// {
// 	if (*c >= 97 && *c <= 122)
// 		*c = *c - 32;
// }

// int main(void)
// {
//     char input[] = "Hello Im Rekia";
//     printf("Original: %s\n", input);

//     ft_striteri(input,my_func);
//     printf("Modified: %s\n", input);

//     return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:17:00 by rkhatim           #+#    #+#             */
/*   Updated: 2023/12/01 22:09:59 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		strlen;
	char	*dup;

	strlen = ft_strlen(src) + 1;
	dup = malloc(strlen * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (strlen)
	{
		strlen--;
		dup[strlen] = src[strlen];
	}
	return (dup);
}
// int	main(void)
// {
// 	char	*copy;
// 	char	*copy1;

// 	// const char	*ori = "";
// 	copy1 ="rekia";
// 	copy = ft_strdup(copy1);
// 	// copy = strdup(copy1);
// 	printf("my own one  : %s\n", copy);
// 	// printf("the original function : %s ", copy);
// 	return (0);
// }

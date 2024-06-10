/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatim <rkhatim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:28:01 by rkhatim           #+#    #+#             */
/*   Updated: 2023/12/01 17:11:57 by rkhatim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *str, char charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == charset)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != charset)
			i++;
	}
	return (count);
}

static char	*malloc_word(char const *str, int i, char charset)
{
	int		j;
	char	*tab;
	int		len;

	len = 0;
	j = i;
	while (str[j] && str[j] != charset)
	{
		j++;
		len++;
	}
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	j = 0;
	while (j < len)
	{
		tab[j] = str[i];
		i++;
		j++;
	}
	tab[j] = '\0';
	return (tab);
}

static char	**free_split(char **str, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char	**sub_split(char const *str, char charset, char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == charset)
			i++;
		if (str[i])
		{
			tab[j] = malloc_word(str, i, charset);
			if (tab[j] == NULL)
				return (free_split(tab, j));
			j++;
		}
		while (str[i] && str[i] != charset)
			i++;
	}
	tab[j] = 0;
	return (tab);
}

char	**ft_split(char const *str, char charset)
{
	char	**tab;

	if (str == NULL)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (count_word(str, charset) + 1));
	if (!tab)
		return (NULL);
	tab = sub_split(str, charset, tab);
	return (tab);
}
// int	main(void)
// {
// 	char const	*input_string;
// 	char		charset;
// 	char		**result;

// 	input_string = "Hello,World";
// 	charset = ',';
// 	// Call the ft_split function
// 	result = ft_split(input_string, charset);
// 	if (result != NULL)
// 	{
// 		// Print the resulting strings
// 		for (int i = 0; result[i] != NULL; i++)
// 		{
// 			printf("Word %d: %s\n", i + 1, result[i]);
// 		}
// 		// Free the memory allocated by ft_split
// 		for (int i = 0; result[i] != NULL; i++)
// 		{
// 			free(result[i]);
// 		}
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Error: ft_split returned NULL\n");
// 	}
// 	return (0);
// }

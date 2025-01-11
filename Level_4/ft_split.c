/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 17:39:48 by olthorel          #+#    #+#             */
/*   Updated: 2025/01/11 17:39:48 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int is_charset(char c)
{
	return (c == 32 || c == '\t');
}

int count_word(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_charset(*str))
			str++;
		if (*str && !is_charset(*str))
		{
			count++;
			while (*str && !is_charset(*str))
				str++;
		}
	}
	return (count);
}

char	*malloc_word(char *str)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && !is_charset(str[i]))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !is_charset(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**split;
	int		i;
	
	i = 0;
	split = (char **)malloc(sizeof(char *) * (count_word(str) + 1));
	if (!split)
		return (NULL);
	while (*str)
	{
		while (*str && is_charset(*str))
			str++;
		if (*str && !is_charset(*str))
		{
			split[i] = malloc_word(str);
			i++;
			while (*str && !is_charset(*str))
				str++;
		}
	}
	split[i] = NULL;
	return (split);
}

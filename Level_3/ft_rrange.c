/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:27:20 by olthorel          #+#    #+#             */
/*   Updated: 2024/12/10 10:47:28 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	*tab;
	int	i;
	int	len;
	
	i = 0;
	if (start < end)
		len = end - start + 1;
	else
		len = start - end + 1;
	tab = (int *)malloc(sizeof(int) * len);
	if (!tab)
		return (NULL);
	if (start < end)
	{
		while (i < len)
		{
			tab[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			tab[i] = start;
			start--;
			i++;
		}
	}	
	return (tab);
}

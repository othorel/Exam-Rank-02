/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 20:07:46 by olthorel          #+#    #+#             */
/*   Updated: 2024/12/08 20:07:46 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	*tab;
	int	len;
	int	i;

	i = 0;
	if (start <= end)
		len = end - start + 1;
	else
		len = start - end + 1;
	tab = (int *)malloc(sizeof(int) * len);
	if (!tab)
		return (NULL);
	while (i < len)
	{
		tab[i] = start;
		if (start < end)
			start++;
		else
			start--;
		i++;
	}
	return (tab);
}

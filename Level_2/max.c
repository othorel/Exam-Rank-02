/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 14:59:46 by olthorel          #+#    #+#             */
/*   Updated: 2024/12/08 14:59:46 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	unsigned int	i;
	int				max_value;

	if (len == 0)
		return (0);
	i = 0;
	max_value = tab[i];
	while (i < len)
	{
		if (max_value < tab[i])
			max_vaue = tab[i];
		i++;
	}
	return (max_value);
}

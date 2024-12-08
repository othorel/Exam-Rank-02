/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 19:13:18 by olthorel          #+#    #+#             */
/*   Updated: 2024/12/08 19:13:18 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	space;

	i = 0;
	space = 0;
	if (ac == 2)
	{
		while (av[1][i] == 32 || av[1][i] == '\t')
			i++;
		while (av[1][i])
		{
			if (av[1][i] == 32 || av[1][i] == '\t')
				space = 1;
			else
			{
				if (space)
					write(1, "   ", 3);
				space = 0;
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

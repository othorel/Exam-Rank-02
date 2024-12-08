/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 17:36:09 by olthorel          #+#    #+#             */
/*   Updated: 2024/12/08 17:36:09 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;
	int	tab[256] = {0};

	if (ac == 3)
	{
		while (av[1][i])
		{
			if (!(tab[(int) av[1][i]]))
			{
				write(1, &av[1][i], 1);
				tab[(int) av[1][i]] = 1;
			}
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (!(tab[(int) av[2][i]]))
			{
				write(1, &av[2][i], 1);
				tab[(int) av[2][i]] = 1;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

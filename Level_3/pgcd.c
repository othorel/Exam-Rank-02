/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:45:51 by olthorel          #+#    #+#             */
/*   Updated: 2024/12/11 11:52:25 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	nb1;
	int nb2;
	if (ac == 3)
	{
		nb1 = atoi(av[1]);
		nb2 = atoi(av[2]);
		if (nb1 > 0 && nb2 > 0)
		{
			while (nb1 != nb2)
			{
				if (nb1 > nb2)
					nb1 = nb1 - nb2;
				else
					nb2 = nb2 - nb1;
			}
			printf("%d", nb1);
		}
	}
	write(1, "\n", 1);
	return (0);
}

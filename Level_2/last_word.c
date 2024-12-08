/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 14:47:36 by olthorel          #+#    #+#             */
/*   Updated: 2024/12/08 14:47:36 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while(av[1][i])
			i++;
		i--;
		while (av[1][i] == 32 || av[1][i] == '\t')
			i--;
		while (av[1][i] && av[1][i] != 32 && av[1][i] != '\t')
			i--;
		i++;
		while (av[1][i] && av[1][i] != 32 && av[1][i] != '\t')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

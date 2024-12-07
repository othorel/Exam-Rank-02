/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:52:44 by olthorel          #+#    #+#             */
/*   Updated: 2024/12/07 15:52:44 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	nb1;
	int	nb2;

	if (ac == 4)
	{
		nb1 = atoi(av[1]);
		nb2 = atoi(av[3]);

		if (av[2][0] == '+')
			printf("%d", nb1 + nb2);
		if (av[2][0] == '-')
			printf("%d", nb1 - nb2);
		if (av[2][0] == '*')
			printf("%d", nb1 * nb2);
		if (av[2][0] == '/')
			printf("%d", nb1 / nb2);
		if (av[2][0] == '%')
			printf("%d", nb1 % nb2);
	}
	printf("\n");
	return (0);
}

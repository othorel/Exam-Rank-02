/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:55:27 by olthorel          #+#    #+#             */
/*   Updated: 2025/01/11 16:55:27 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int		n;
	int		i;

	if (ac == 2)
	{
		n = atoi(av[1]);
		if (n == 1)
			printf("1");
		i = 2;
		while (n > 1)
		{
			if (n % i == 0)
			{
				printf("%d", i);
				n /= i;
				if (n > 1)
					printf("*");
			}
			else
				i++;
		}
	}
	printf("\n");
	return (0);
}

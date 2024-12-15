/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 10:42:59 by olthorel          #+#    #+#             */
/*   Updated: 2024/12/15 10:42:59 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    capitalizer(char *str)
{
    int i;

    i = 0;
	while (str[i])
	{
		if ((i == 0 || str[i - 1] == 32 || str[i - 1] == '\t') && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if (!(i == 0 || str[i - 1] == 32 || str[i - 1] == '\t') && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		write(1, &str[i], 1);
		i++;
	}
}

	int	main(int ac, char **av)
	{
		int	i;

		i = 1;
		if (ac > 1)
		{
			while (i < ac)
			{
				capitalizer(av[i]);
				write(1, "\n", 1);
				i++;
			}
		}
		else
			write(1, "\n", 1);
		return (0);
	}

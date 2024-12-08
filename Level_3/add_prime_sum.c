/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 17:58:37 by olthorel          #+#    #+#             */
/*   Updated: 2024/12/08 17:58:37 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result);
}

void	ft_putnbr(int nb)
{
	int	c;

	if (nb > 9)
		ft_putnbr(nb / 10);
	c = (nb % 10) + 48;
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	nb;
	int	sum;

	sum = 0;
	if (ac == 2)
	{
		nb = ft_atoi(av[1]);
		while (nb > 0)
		{
			if (ft_is_prime(nb))
				sum = sum + nb;
			nb--;
		}
		ft_putnbr(sum);
	}
	else
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}

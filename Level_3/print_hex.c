/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:53:36 by olthorel          #+#    #+#             */
/*   Updated: 2024/12/11 14:36:48 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result);
}

 void	print_hexa(int nb)
 {
	char	tab[] = "0123456789abcdef";
	
	if (nb > 15)
		print_hexa(nb / 16);
	write(1, &tab[nb % 16], 1);
 }
 
 int	main(int ac, char **av)
 {
	if (ac == 2)
		print_hexa(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
 }
 
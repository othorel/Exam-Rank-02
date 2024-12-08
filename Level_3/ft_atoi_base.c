/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 19:23:28 by olthorel          #+#    #+#             */
/*   Updated: 2024/12/08 19:23:28 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_base(int c, int base)
{
	if (c >= 48 && c <= 57)
		return (c - 48 < base);
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10 < base);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10 < base);
	return (0);	
}

static int	value(int c)
{
	if (c >= 48 && c <= 57)
		return (c - 48);
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);	
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	if (!str || str_base < 2 || str_base > 16)
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (is_base(str[i], str_base))
	{
		result = (result * str_base) + value(str[i]);
		i++;
	}
	return (result * sign);
}

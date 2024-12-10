/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:57:01 by olthorel          #+#    #+#             */
/*   Updated: 2024/12/10 11:20:33 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		a = b;
	else
		b = a;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}
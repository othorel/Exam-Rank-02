/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:17:13 by olthorel          #+#    #+#             */
/*   Updated: 2024/12/08 15:17:13 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	rev;

	i = 0;
	rev = 0;
	while (i < 8)
	{
		rev = (rev << 1) | (octet & 1);
		octet >>= 1;
		i++;
	}
	return (rev);
}
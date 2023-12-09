/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-qasr <oel-qasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:25:08 by oel-qasr          #+#    #+#             */
/*   Updated: 2023/12/06 21:44:02 by oel-qasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa(unsigned int nh, int *count, char str)
{
	char	*base;

	if (str == 'x')
		base = "0123456789abcdef";
	else if (str == 'X')
		base = "0123456789ABCDEF";
	if (nh >= 16)
	{
		ft_hexa(nh / 16, count, str);
		ft_hexa(nh % 16, count, str);
	}
	else
		ft_putchar(base[nh], count);
}

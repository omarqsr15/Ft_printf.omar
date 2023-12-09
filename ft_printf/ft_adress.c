/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-qasr <oel-qasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:48:14 by oel-qasr          #+#    #+#             */
/*   Updated: 2023/12/06 10:39:58 by oel-qasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_adres(unsigned long nh, int *count)
{
	char	*base;

	base = "0123456789abcdef";
	if (nh >= 16)
	{
		ft_adres(nh / 16, count);
		ft_adres(nh % 16, count);
	}
	else
	{
		ft_putchar(base[nh], count);
	}
}

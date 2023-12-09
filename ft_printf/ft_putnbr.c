/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-qasr <oel-qasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 22:03:33 by oel-qasr          #+#    #+#             */
/*   Updated: 2023/12/06 10:26:19 by oel-qasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nh, int *count)
{
	unsigned int	nbr;

	if (nh == -2147483648)
	{
		ft_putstr("-2147483648", count);
		return ;
	}
	if (nh < 0)
	{
		ft_putchar('-', count);
		nh *= -1;
	}
	nbr = nh;
	if (nh > 9)
	{
		ft_putnbr(nbr / 10, count);
		ft_putnbr(nbr % 10, count);
	}
	else
		ft_putchar(nbr + '0', count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-qasr <oel-qasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:22:46 by oel-qasr          #+#    #+#             */
/*   Updated: 2023/12/06 10:19:47 by oel-qasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int u, int *count)
{
	if (u > 9)
	{
		ft_putunbr(u / 10, count);
		ft_putunbr(u % 10, count);
	}
	else
		ft_putchar(u + '0', count);
}

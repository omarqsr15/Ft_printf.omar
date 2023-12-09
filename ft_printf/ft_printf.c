/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-qasr <oel-qasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 02:00:03 by oel-qasr          #+#    #+#             */
/*   Updated: 2023/12/09 15:05:05 by oel-qasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_next(char str, va_list *args, int *count)
{
	if (str == 'c')
		ft_putchar(va_arg(*args, int), count);
	else if (str == 's')
		ft_putstr(va_arg(*args, char *), count);
	else if (str == 'd' || str == 'i')
		ft_putnbr(va_arg(*args, int), count);
	else if (str == 'u')
		ft_putunbr(va_arg(*args, unsigned int), count);
	else if (str == 'x' || str == 'X')
		ft_hexa(va_arg(*args, unsigned int), count, str);
	else if (str == 'p')
	{
		ft_putstr("0x", count);
		ft_adres(va_arg(*args, unsigned long), count);
	}
	else
		ft_putchar(str, count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (write (1, "", 0) == -1)
		return (-1);
	va_start(args, str);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] && str[i] != '%')
			ft_putchar(str[i], &count);
		else if (str[i] == '%')
		{
			i++;
			if (str[i] == '\0')
				break ;
			ft_check_next(str[i], &args, &count);
		}
		i++;
	}
	return (va_end(args), count);
}

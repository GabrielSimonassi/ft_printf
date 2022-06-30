/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:47:13 by gsimonas          #+#    #+#             */
/*   Updated: 2022/06/30 14:51:45 by gsimonas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_check_print(va_list ptr, const char *s);

int	ft_printf(const char *str, ...)
{
	int		count;
	int		index;
	va_list	ap;

	va_start(ap, str);
	count  = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] != '%')
		{
			ft_putchar(str[index]);
			index++;
			count++;
		}
		else if (str[index] == '%')
		{
			count = count + ft_check_print(ap, &str[index]);
			index += 2;
		}
	}
	va_end(ap);
	return (count);
}

int	ft_check_print(va_list ptr, const char *s)
{
	int	index;

	index = 0;
	if (s[index + 1] == '%')
		return(ft_putchar('%'));
	if (s[index + 1] == 'c')
	{
		return(ft_putchar(va_arg(ptr, int)));
	}
	else if (s[index + 1] == 's')
		return (ft_putstr(va_arg(ptr, char *)));
//	else if (s[index + 1] == 'i' || s[index + 1] == 'd')
//		return (ft_putnbr(va_arg(ptr, int), 0));
	else if (s[index + 1] == 'u')
		return(ft_utoa(va_arg(ptr, unsigned int)));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:18:57 by gsimonas          #+#    #+#             */
/*   Updated: 2022/06/30 14:51:06 by gsimonas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static	int	ft_ncount(unsigned int c)
{
	unsigned int	count;

	count = 1;
	while (c > 9)
	{
		count++;
		c /= 10;
	}
	return (count);
}

unsigned int	ft_utoa(unsigned int n)
{
	char			*ptr;
	unsigned int	len;

	len = ft_ncount(n) + 1;
	ptr = (char *) malloc (len * sizeof(ptr));
	if (!ptr)
		return (0);
	ptr[len] = '\0';
	while (n > 0)
	{
		ptr[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	while (ptr[len] != '\0')
	{
		write(1, &ptr[len], 1);
		len++;
	}
	free(ptr);
	return (len);
}

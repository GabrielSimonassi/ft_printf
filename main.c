#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	ret;

/*	char	c = '%';
	char 	*str = "teste";
	int		d = 10;
	int		i = 15;*/
	unsigned int	u = 48524868;
/*	char	*address = "0";
	unsigned int	x = 10;
	unsigned int	X = 10;

	ret = ft_printf("Print do char: %c\n", c);
	ft_printf("tam: %i\n", ret);
	ret = ft_printf("Print da string: %s\n", "teste");
	ft_printf("tam: %i\n", ret);
	ret = ft_printf("%p ", &address);
	ft_printf("tam: %i", ret);
	ret = ft_printf("Print decimal: %d\n", d);
	ft_printf("tam: %i\n", ret);
	ret = ft_printf("Print int: %i\n", i);
	ft_printf("tam: %i", ret);*/
	ret = ft_printf("%u", u);
/*	ft_printf("tam: %i", ret);
	ret = ft_printf("%x ", x);
	ft_printf("tam: %i", ret);
	ret = ft_printf("%X ", X);
	ft_printf("tam: %i", ret);
	ft_printf("%% ");*/

	return (0);
}

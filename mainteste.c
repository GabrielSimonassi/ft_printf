#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main()
{
	int	ret;

	printf("-----ORIGINAL-----\n");
	ret = printf(" %d ", INT_MAX);
	printf("%d\n", ret);
	ft_printf("----FT------\n");
	ret = ft_printf(" %d ", INT_MAX);
	printf("%d\n", ret);
	return (0);
}

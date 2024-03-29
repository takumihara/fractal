#include <limits.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	long	rtn;
	int		sign;

	rtn = 0;
	sign = 1;
	while (('\t' <= *str && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while ('0' <= *str && *str <= '9')
	{
		if ((rtn * 10 + *str - '0') / 10 != rtn)
		{
			if (sign == 1)
				return ((int)(LONG_MAX));
			return ((int)(LONG_MIN));
		}
		rtn = rtn * 10 + *str - '0';
		str++;
	}
	return ((int)(sign * rtn));
}

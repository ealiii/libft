/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:23:35 by eali              #+#    #+#             */
/*   Updated: 2023/08/04 18:18:54 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	long long int	res;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = sign * -1;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((res > LONG_MAX / 10) || (res == LONG_MAX / 10 && (*str
					- '0') > LONG_MAX % 10))
		{
			if (sign == 1)
				return (-1);
			else if (sign == -1)
				return (0);
		}
		res = res * 10 + (str[i++] - '0');
	}
	return (res * sign);
}
// int	main(int ac, char *av[])
// {
// 	(void)ac;
// 	printf("mine = %d\n", ft_atoi(av[1]));
// 	printf("real = %d\n", atoi(av[1]));
// }
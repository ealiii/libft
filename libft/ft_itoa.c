/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:41:22 by eali              #+#    #+#             */
/*   Updated: 2023/08/04 18:19:53 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nblen(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	long	nb;

	nb = n;
	i = nblen(nb);
	if (nb < 0)
	{
		nb = -nb;
	}
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i] = '\0';
	while (i-- != 0)
	{
		s[i] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}

// int	main(void)
// {
// 	int num1 = 1234;
// 	int num2 = -5678;
// 	int num3 = 0;

// 	char *str1 = ft_itoa(num1);
// 	char *str2 = ft_itoa(num2);
// 	char *str3 = ft_itoa(num3);

// 	printf("Number: %d, String: %s\n", num1, str1);
// 	printf("Number: %d, String: %s\n", num2, str2);
// 	printf("Number: %d, String: %s\n", num3, str3);

// 	printf("%s\n", ft_itoa((00012)));
// }

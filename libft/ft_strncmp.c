/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:24:10 by eali              #+#    #+#             */
/*   Updated: 2023/07/10 14:43:22 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	x;
	unsigned char	st1;
	unsigned char	st2;

	x = 0;
	while (x < n && (s1[x] != '\0' || s2[x] != '\0'))
	{
		st1 = (unsigned char)s1[x];
		st2 = (unsigned char)s2[x];
		if (st1 > st2)
		{
			return (1);
		}
		else if (st1 < st2)
		{
			return (-1);
		}
		x++;
	}
	return (0);
}
// int main()
// {
//     char *str1 = "\200";
//     char *str2 = "\0";
//     int n = 5;
//     printf("%d", ft_strncmp(str1, str2, n));
// }

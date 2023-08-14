/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:24:01 by eali              #+#    #+#             */
/*   Updated: 2023/07/30 21:54:19 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	s1;

	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	s1 = *s;
	if (s1 == (char)c)
	{
		return ((char *)s);
	}
	return (0);
}
// int	main(void)
// {
// 	char	*str;

// 	str = "fd_strchr\t: ";
// 	printf("%s", ft_strchr(str, 't'));
// }
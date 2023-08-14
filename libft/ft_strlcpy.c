/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:24:10 by eali              #+#    #+#             */
/*   Updated: 2023/07/31 21:10:15 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	while ((i < dstsize -1) && src[i] != '\0')
	{
		dst[i] = src [i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int main ()
// {
// 	char src[] = "essa";
// 	char dst[] = " bader";
// 	printf("%s\n", dst); 
// 	ft_strlcpy(dst, src, 3);
// 	printf("%s\n", dst); 
// 	printf("%zu", ft_strlcpy(dst, src, 3)); 
// }
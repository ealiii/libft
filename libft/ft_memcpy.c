/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:23:53 by eali              #+#    #+#             */
/*   Updated: 2023/07/30 20:13:15 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*des;
	char	*srcc;
	size_t	i;

	i = 0;
	des = dst;
	srcc = (char *)src;
	if (!dst && !src)
	{
		return (0);
	}
	while (i < n)
	{
		des[i] = srcc[i];
		i++;
	}
	return (dst);
}

// int main ()
// {
// 	char src[] = "esaafatima";
// 	char dest[] = "skfhlskvkdlsfksdf";
// 	char *s = ft_memcpy(dest, src, 10);
// 	printf("%s", s);
// }
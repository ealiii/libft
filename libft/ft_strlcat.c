/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:32:32 by eali              #+#    #+#             */
/*   Updated: 2023/07/30 22:09:01 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	desl;
	size_t	srcl;
	size_t	spc;
	size_t	i;

	if (dst == NULL)
	{
		if (dstsize == 0)
			return (0);
	}
	desl = ft_strlen(dst);
	srcl = ft_strlen(src);
	spc = dstsize - desl - 1;
	i = 0;
	if (dstsize <= desl)
		return (srcl + dstsize);
	if (dstsize == 0)
		return (srcl);
	while (src[i] != '\0' && (i < spc))
	{
		dst[desl + i] = src[i];
		i++;
	}
	dst[desl + i] = '\0';
	return (desl + srcl);
}

// int main()
// {
//       char dest[2] = "a";
//     ft_strlcat(dest, "lorem ipsum dolor sit amet", 5);
//     printf("%s\n", dest);
// 	printf("%zu\n",  ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
// }

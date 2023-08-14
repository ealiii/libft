/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:26:19 by eali              #+#    #+#             */
/*   Updated: 2023/07/30 20:16:37 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if ((!dest && !src) || (dest == src))
		return (dest);
	if (dest > src)
	{
		while (len--)
			((char *)dest)[len] = ((char *)src)[len];
	}
	else
	{
		while (len--)
			*(char *)dest++ = *(char *)src++;
	}
	return (dest_ptr);
}
// int	main(void)
// {
// 	char source[10] = "Hello";
// 	char destination[10] = "World";

// 	printf("Before memmove: %s\n", destination);

// 	ft_memmove(destination, source, 5);

// 	printf("After memmove: %s\n", destination);

// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:23:59 by eali              #+#    #+#             */
/*   Updated: 2023/07/30 20:21:24 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	void	*str_ptr;

	str_ptr = str;
	while (n--)
		*(unsigned char *)str++ = (unsigned char)c;
	return (str_ptr);
}

// int	main(void)
// {
// 	char a[] = "esa bader saleh";
// 	int x = 'x';
// 	printf("before : %s\n", a);
// 	ft_memset(a + 4, x, 5);
// 	ft_memset(a + 11, x, 2);
// 	printf(" after : %s", a);
// 	return (0);
// }
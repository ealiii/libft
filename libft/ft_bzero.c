/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:47:27 by eali              #+#    #+#             */
/*   Updated: 2023/08/01 18:05:41 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*b;
	size_t			i;

	b = s;
	i = 0;
	while (i < n)
	{
		b[i] = 0;
		i++;
	}
}

// int main()
// {
// 	int i = 0;
// 	char array[10] = "0123456789";
// 	while (i < 10)
// 		printf("%d\n", array[i++]);
// 	// ft_bzero(array, 3);
// 	ft_bzero(array, 10);
// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("%d\n", array[i++]);
// 	}
// }

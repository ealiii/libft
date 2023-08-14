/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 21:15:51 by eali              #+#    #+#             */
/*   Updated: 2023/08/04 00:23:38 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if ((size != 0) && (count > UINT_MAX / size))
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}

// int	main(void)
// {
// 	char	*s;
// 	char	*p = "essanader";
// 	int		i;

// 	s = ft_calloc(0, 0);
// 	i = 0;
// 	while (p[i])
// 	{
// 		s[i] = p[i];
// 		i++;
// 	}
// 	printf("%s\n", s);
// 	printf("%s", p);
// }
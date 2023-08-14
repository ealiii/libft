/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:24:16 by eali              #+#    #+#             */
/*   Updated: 2023/07/30 22:38:31 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	z;

	z = ft_strlen(s);
	while (z >= 0)
	{
		if (s[z] == (char)c)
		{
			return ((char *)s + z);
		}
		z--;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char *s = "waeabbbbbbbb";
// 	printf("%s", ft_strrchr(s, 'a'));
// }
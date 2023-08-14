/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:39:29 by eali              #+#    #+#             */
/*   Updated: 2023/08/05 21:54:04 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		maxl;
	char		*dest;

	if (!s)
		return (NULL);
	maxl = ft_strlen(s);
	if (len > maxl)
		len = maxl;
	if (len > maxl - start)
		len = maxl - start;
	if (start >= maxl)
		return (ft_strdup(""));
	dest = ft_calloc(len + 1, sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len && start <= ft_strlen(s))
	{
		dest[i] = s [start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	const char		*s;
// 	unsigned int	start;
// 	size_t			length;
// 	char			*subs;

// 	s = "Holajkgfkgk";
// 	start = 2;
// 	length = 30;
// 	subs = ft_substr(s, 11, 10);
// 	if (subs == NULL)
// 	{
// 		printf("Failed to allocate memory for the substring.\n");
// 		return (1);
// 	}
// 	printf("Original string: %s\n", s);
// 	printf("Substring: %s\n", subs);
// 	free(subs);
// 	return (0);
// }
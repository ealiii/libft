/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:24:13 by eali              #+#    #+#             */
/*   Updated: 2023/08/01 17:47:34 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	a;
	char	*h;
	char	*n;

	h = (char *)haystack;
	n = (char *)needle;
	if (*n == '\0')
		return (h);
	if (len == 0)
		return (NULL);
	i = 0;
	while (h[i] != '\0' && (i < len))
	{
		a = 0;
		while (n[a] != '\0' && (i + a < len) && h[i + a] == n[a])
			a++;
		if (n[a] == '\0')
			return (h + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
//     char *str1 = "one two three four five";
//    char *str2 = "five";
//    char *s =  ft_strnstr(str1, str2, (ft_strlen(str1)));
//     printf("\n%s\n", s);
// 	printf("\n%s\n", ft_strnstr(str1, str2, 23));
// }

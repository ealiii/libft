/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:37:12 by eali              #+#    #+#             */
/*   Updated: 2023/07/30 22:18:19 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	if (!s)
		return (NULL);
	res = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// char	f(unsigned int x, char c)
// {
// 	(void)x;
// 	return (c + 1);
// }

// int	main(void)
// {
// 	const char	*str;
// 	char		*transformed_word;

// 	str = "HELLO WORLD!";
// 	transformed_word = ft_strmapi(str, &f);
// 	printf("Original string: %s\n", str);
// 	printf("Transformed string: %s\n", transformed_word);
// 	free(transformed_word);
// 	return (0);
// }

// 	size_t	i;
// 	char	*str;
// char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
// {
// 	char	s1;

// 	i = 0;
// 	s1 = ft_strlen(s);
// 	str = malloc(s1 + 1);
// 	if (!str)
// 		return (NULL);
// 	while (str[i] != '\0')
// 	{
// 		str[i] = (*f)(i, s[i]);
// 		i++;
// 	}
// 	str[i] = '\0';
// 	return (str);
// }
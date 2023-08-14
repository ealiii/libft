/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:19:15 by eali              #+#    #+#             */
/*   Updated: 2023/07/16 15:36:08 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	ii;
	char	*j;

	if (!s1 || !s2)
		return (NULL);
	j = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!j)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		j[i] = s1[i];
		i++;
	}
	ii = 0;
	while (s2[ii] != '\0')
	{
		j[i++] = s2[ii++];
	}
	j[i] = '\0';
	return (j);
}
// int	main(void)
// {
// 	char *s1 = "essa ";
// 	char *s2 = "bader";
// 	printf("%s", ft_strjoin(s1, s2));
// }
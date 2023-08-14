/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 22:48:46 by eali              #+#    #+#             */
/*   Updated: 2023/07/30 20:39:52 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	sl;
	char	*co;

	sl = ft_strlen(s1);
	co = malloc(sl + 1);
	if (!co)
		return (NULL);
	if (co != 0)
	{
		ft_memcpy(co, s1, sl);
	}
	co[sl] = '\0';
	return (co);
}

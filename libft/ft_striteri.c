/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:50:12 by eali              #+#    #+#             */
/*   Updated: 2023/07/30 21:04:05 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void ghj(unsigned int index, char *c)
// {
//     if (*c >= 'a' && *c <= 'z')
//         *c -= 32;
// }

// int main()
// {
// 	char s[] = "abcde";
// 	ft_striteri(s, ghj);
// 	printf("%s", s);

// }

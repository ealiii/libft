/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebs <ebs@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:23:49 by eali              #+#    #+#             */
/*   Updated: 2023/07/12 23:15:29 by ebs              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	errorfree(char **arry, int k)
{
	int	j;

	j = 0;
	if (arry[k] == NULL)
	{
		while (j < k)
		{
			free(arry[j]);
			j++;
		}
	}
}

static int	length_str(const char *s, char c, int start)
{
	int	i;

	i = 0;
	while (s[i + start])
	{
		if (s[i + start] == c)
			return (i);
		i++;
	}
	return (i);
}

static int	ft_word(const char *s, char c)
{
	int	i;
	int	str;
	int	ch;

	i = 0;
	ch = 0;
	str = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && str == 0)
		{
			str = 1;
			ch++;
		}
		else if (s[i] == c)
			str = 0;
		i++;
	}
	return (ch);
}

static char	**ft_print(char **arry, const char *s, char c, int i)
{
	int	k;
	int	m;

	k = 0;
	m = 0;
	while (s[i])
	{
		arry[k] = malloc(sizeof(char) * (length_str(s, c, i) + 1));
		if (!arry)
			return (NULL);
		errorfree(arry, k);
		m = 0;
		while (s[i] != c && s[i])
		{
			arry[k][m] = s[i];
			i++;
			m++;
		}
		arry[k][m] = '\0';
		while (s[i] == c && c != '\0')
			i++;
		k++;
	}
	arry[k] = NULL;
	return (arry);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		ccc;
	char	**arry;

	i = 0;
	if (!s)
		return (NULL);
	ccc = ft_word(s, c);
	arry = ft_calloc(sizeof(char *), (ccc + 1));
	if (!arry)
		return (NULL);
	if (ccc == 0)
		return (arry);
	while (s[i] == c)
		i++;
	arry = ft_print(arry, s, c, i);
	return (arry);
}

// int	main(void)
// {
// 	int		i;
// 	char	**s;

// 	i = 0;
// 	s = ft_split("", ' ');
// 	if (s)
// 	{
// 		while (s[i])
// 		{
// 			printf("%s\n", s[i]);
// 			free(s[i]);
// 			i++;
// 		}
// 		free(s);
// 	}
// 	return (0);
// }

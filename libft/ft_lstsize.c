/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 22:08:17 by eali              #+#    #+#             */
/*   Updated: 2023/08/03 22:05:31 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

// int main()
// {
// 	t_list *n1 = ft_lstnew("first1111");
// 	t_list *n2 = ft_lstnew("second2222");
// 	t_list *n3 = ft_lstnew("33333333333");
// 	t_list *n4 = ft_lstnew("33333333333");
// 	n1->next = n2;
// 	n2->next = NULL;
// 	n3->next = n4;
// 	printf("%d", ft_lstsize(n1));
// } 
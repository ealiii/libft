/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:15:05 by eali              #+#    #+#             */
/*   Updated: 2023/08/01 18:53:15 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*item;

	item = (t_list *)malloc(sizeof(t_list));
	if (!item)
		return (NULL);
	item->content = content;
	item->next = NULL;
	return (item);
}

// int	main(void)
// {
// 	t_list *n1 = ft_lstnew("firstnode");
// 	t_list *n2 = ft_lstnew("secondnode");
// 	n1->next = n2;
// 	printf("%s\n%s", n1->content, n1->next->content);
// }
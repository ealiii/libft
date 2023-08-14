/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:12:37 by eali              #+#    #+#             */
/*   Updated: 2023/08/03 23:48:36 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int main(void)
// {
//     t_list *list;
//     list = ft_lstnew("First element");
//     list->next = ft_lstnew("Second element");
//     list->next->next = ft_lstnew("Third element");
// 	list->next->next->next = ft_lstnew("finalelement");
//     t_list *lastinlist = ft_lstlast(list);
//     printf("Last content: %s\n", lastinlist->content);
// }
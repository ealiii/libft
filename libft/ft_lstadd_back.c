/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 19:19:07 by eali              #+#    #+#             */
/*   Updated: 2023/08/03 22:41:34 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
// int	main(void)
// {
// 	t_list *list = NULL;

// 	ft_lstadd_back(&list, ft_lstnew("First element"));
// 	ft_lstadd_back(&list, ft_lstnew("Second element"));
// 	ft_lstadd_back(&list, ft_lstnew("Third element"));

// 	t_list *last_node = ft_lstlast(list);

// 	if (last_node)
// 	{
// 		printf("Last node content: %s\n", (char *)last_node->content);
// 	}
// 	else
// 	{
// 		printf("The list is empty.\n");
// 	}

// 	return (0);
// }
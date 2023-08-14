/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:01:21 by eali              #+#    #+#             */
/*   Updated: 2023/07/19 22:03:58 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*new_node;

// 	head = malloc(sizeof(t_list));
// 	head->content = "33";
// 	new_node = malloc(sizeof(t_list));
// 	new_node->content = "42";
// 	new_node->next = head;
// 	ft_lstadd_front(&head, new_node);
// 	printf("Data in the first node: %s\n", (char *)head->content);
// 	free(new_node);
// 	new_node->content = head;
// 	printf("Data in the first node: %s\n", (char *)head->content);
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 21:11:12 by eali              #+#    #+#             */
/*   Updated: 2023/08/03 23:48:12 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		if (current->content)
			del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}
// void	del(void *content)
// {
// 	int	*ptr;

// 	if (content)
// 	{
// 		ptr = (int *)content;
// 		free(ptr);
// 	}
// }
// int	main(void)
// {
// 	t_list	*list = ft_lstnew(strdup("111111"));
// 	list->next = ft_lstnew(strdup("22222"));
// 	list->next->next = ft_lstnew(strdup("333333"));
// 	list->next->next->next = ft_lstnew(strdup("444444"));
// 	printf("Original list:\n");
// 	while (list)
// 	{
// 		printf("%s\n", list->content);
// 		list = list->next;
// 	}
// 	ft_lstclear(&list, del);
// 	printf("\nUpdated list after clearing:\n");
// 	while (list)
// 	{
// 		printf("%s\n", list->content);
// 		list = list->next;
// 	}
// 	return (0);
// }

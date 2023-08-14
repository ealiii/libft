/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 19:24:36 by eali              #+#    #+#             */
/*   Updated: 2023/08/03 23:48:06 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (lst->content)
		del(lst->content);
	free(lst);
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
// 	t_list	*list;
// 	t_list	*current;

// 	list = NULL;
// 	list = ft_lstnew(ft_strdup("First element"));
// 	list->next = ft_lstnew(ft_strdup("Second element"));
// 	list->next->next = ft_lstnew(ft_strdup("Third element"));
// 	list->next->next->next = ft_lstnew(ft_strdup("forth element"));
// 	printf("before:\n");
// 	current = list;
// 	while (current)
// 	{
// 		printf("%s\n", (char *)current->content);
// 		current = current->next;
// 	}
// 	ft_lstdelone(list->next->next, del);
// 	printf("\nafter:\n");
// 	current = list;
// 	while (current)
// 	{
// 		printf("%s\n", (char *)current->content);
// 		current = current->next;
// 	}
// }

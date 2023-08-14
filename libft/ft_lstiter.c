/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eali <eali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 21:15:20 by eali              #+#    #+#             */
/*   Updated: 2023/08/05 21:17:10 by eali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!lst || !f)
		return ;
	current = lst;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
}

// void	print_int(void *content)
// {
// 	printf("%d\n", *(int *)content);
// }

// int main(void)
// {
//     // Create a linked list and add some elements to it
//     t_list *list = NULL;
//     list = ft_lstnew(malloc(sizeof(int)));
//     *(int *)(list->content) = 10;
//     list->next = ft_lstnew(malloc(sizeof(int)));
//     *(int *)(list->next->content) = 20;
//     list->next->next = ft_lstnew(malloc(sizeof(int)));
//     *(int *)(list->next->next->content) = 30;
//     list->next->next->next = NULL;

//     // Print the original list
//     printf("Original list:\n");
//     ft_lstiter(list, print_int);

//     // Don't forget to free the allocated memory in the list
//     t_list *current = list;
//     while (current)
//     {
//         t_list *next = current->next;
//         free(current->content);
//         free(current);
//         current = next;
//     }

//     return (0);
// }
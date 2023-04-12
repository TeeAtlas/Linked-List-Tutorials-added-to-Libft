/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:34:26 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/12 15:24:57 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*  @brief: Iterates the list 'lst' and applies the function 'f' on the content
of each node. Creats a new list resulting of the successice applicaitons
of the function 'f'. The 'del' functon is used to delete the content of 
a node if needed
*  @brief: The address of a pointer to the first node
*  @param f: The address of the function used to iterate on the list
*  @param del: Teh address of teh funciton used to delete the content of a node 
if needed
*  @return: The new list. NULL if allocation fails
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *lst1;
	t_list *new;

	lst1 = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst -> content));
		if (!new)
		{
			ft_lstclear(&lst1, del);
			return (lst1);
		}
		ft_lstadd_back(&lst1, new);
		lst = lst -> next;
	}
	return (lst1);
}
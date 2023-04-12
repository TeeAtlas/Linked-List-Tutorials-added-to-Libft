/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:34:26 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/12 15:57:13 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*  @brief: purpose to apply function f to each element of the linked list
and create a new linked list with the results
*  @brief: The address of a pointer to the first node
*  @param f: The address of the function used to iterate on the list - takes a 
function pointer that returns a pointer void it is applied to each element of the 
list and return new list with the results
*  @param del: a cuntion pointer that teks ta pointer to 'void' and does some
action like freeing the moemory. it's called on each element of the list in 
case something goes wrong
*  @return: The new list. NULL if allocation fails
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *lst1;
	t_list *new;

	lst1 = NULL; //set to NULL and then enter loop
	while (lst) //loops through original list(lst)
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

/**
 * @line 35, creates a new element for the resulting linkes list using the 
 * ft_new function passing the result of 'f' as the content of the new element
 * @line if function returns NULL (meaning something went wrong allocating memory)
 * ft_clear is called to delete list that has been stored in lst1 and returns lst1
 * @line 41 if ft_new returns a valid pointer function adds new element to end of 
 * list (lst1) using ft_addback 
 * @line 42 function updates the current element to point to the next lemeent 
 * @line 44 when loop completes function returns new linked lst (lst1)
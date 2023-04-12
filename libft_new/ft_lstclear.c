/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 20:32:56 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/07 20:47:35 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Param lst: a pinter to a pointer to a linked list
*  Param del: Address of a function to delete the content of node takes void 
*  pointer as param
*  
*  Deletes and frees the given node and every successor of that node
*  using the function Del and Free(3).
*  Finally the pinter the the list must be set to NULL
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	while(*lst) //while not NULL enter loop until linked list pointer points to NULL
	{
		del((*lst)->content); //with each interation frees content of node
		*lst = (*lst)->next; // then moves pointer to point to next node
	}
}
/* once loop is finished all nodes have been deleted on the linked list and memory freed
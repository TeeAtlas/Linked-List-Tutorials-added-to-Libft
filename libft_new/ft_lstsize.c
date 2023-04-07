/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 19:52:29 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/07 19:58:13 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
* @param *lst: the beginning of the list
* Return the lenght of the list
*
* Counts number of nodes in the list
*/

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0; // initialize counter
	while(lst) // set condition while lst
	{
		lst = lst->next; // store point to next in lst
		i++; // iterate until lst = NULL
	}
	return (i); //return i count
}
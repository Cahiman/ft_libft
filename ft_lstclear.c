/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basianno <basianno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:01:03 by basianno          #+#    #+#             */
/*   Updated: 2026/10/28 14:48:24 by basianno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*new;

	if (!lst || !*lst || !del)
		return ;
	new = *lst;
	while (new != NULL)
	{
		tmp = new->next;
		ft_lstdelone(new, del);
		new = tmp;
	}
	*lst = NULL;
}

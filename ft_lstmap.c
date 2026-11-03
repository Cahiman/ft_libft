/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basianno <basianno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:47:10 by basianno          #+#    #+#             */
/*   Updated: 2026/11/03 15:16:21 by basianno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*res;
	void	*content;

	if (!lst)
		return (NULL);
	if (!f || !del)
		return (NULL);
	new = NULL;
	while (lst != NULL)
	{
		content = (*f)(lst->content);
		res = ft_lstnew(content);
		if (!res)
		{
			ft_lstclear(&new, del);
			(*del)(content);
			return (NULL);
		}
		ft_lstadd_back(&new, res);
		lst = lst->next;
	}
	return (new);
}

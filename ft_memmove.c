/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basianno <basianno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 15:46:06 by basianno          #+#    #+#             */
/*   Updated: 2026/09/10 16:22:29 by basianno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*srcs;
	char		*dest;

	srcs = src;
	dest = dst;
	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		while (len--)
			dest[len] = srcs[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

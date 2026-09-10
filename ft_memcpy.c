/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basianno <basianno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 15:35:17 by basianno          #+#    #+#             */
/*   Updated: 2026/09/10 16:22:41 by basianno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*srcs;
	char		*dest;
	size_t		i;

	srcs = src;
	dest = dst;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		dest[i] = srcs[i];
		i++;
	}
	return (dst);
}

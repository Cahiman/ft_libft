/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basianno <basianno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 15:59:55 by basianno          #+#    #+#             */
/*   Updated: 2026/09/16 17:09:18 by basianno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	start;
	size_t	end;

	start = 0;
	len = ft_strlen(s1);
	end = len - 1;
	while (s1[start] && ft_check(set, s1[start]) == 1)
		start++;
	if (start == len)
		return (ft_substr(s1, start, 0));
	while (end > start && ft_check(set, s1[end]) == 1)
		end--;
	len = end - start + 1;
	str = ft_substr(s1, start, len);
	return (str);
}

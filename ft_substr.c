/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basianno <basianno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 14:43:49 by basianno          #+#    #+#             */
/*   Updated: 2026/09/16 15:07:31 by basianno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	sub_len;
	size_t	string_len;

	string_len = ft_strlen(s);
	i = 0;
	if (start > string_len)
		return (ft_strdup(""));
	sub_len = string_len - start;
	if (sub_len > len)
		sub_len = len;
	res = malloc(sizeof(char) * (sub_len + 1));
	if (!res)
		return (NULL);
	while (i < sub_len)
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}

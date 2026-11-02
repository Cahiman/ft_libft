/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basianno <basianno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 19:59:00 by basianno          #+#    #+#             */
/*   Updated: 2026/09/30 18:03:15 by basianno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(long n)
{
	int		count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*tab;
	long	nbr;

	nbr = n;
	len = ft_len(nbr);
	if (nbr < 0)
		nbr = -nbr;
	tab = malloc(sizeof(char) * len + 1);
	if (!tab)
		return (NULL);
	tab[len] = '\0';
	len--;
	while (len >= 0)
	{
		tab[len] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--;
	}
	if (n < 0)
		tab[0] = '-';
	return (tab);
}

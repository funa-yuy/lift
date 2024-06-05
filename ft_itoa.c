/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyuu <miyuu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 21:28:39 by mfunakos          #+#    #+#             */
/*   Updated: 2024/06/04 22:59:36 by miyuu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static size_t	ft_intlen(long n, int len)
{
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*dst;
	int				len;
	unsigned int	nb;

	dst = malloc((ft_intlen(n, 1) + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	len = ft_intlen(n, 1);
	dst[len] = '\0';
	if (n < 0)
	{
		dst[0] = '-';
		nb = -n;
	}
	else
		nb = n;
	while (len-- && dst[len] != '-')
	{
		dst[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (dst);
}

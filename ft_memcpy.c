/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunakos <mfunakos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:16:36 by mfunakos          #+#    #+#             */
/*   Updated: 2024/04/20 01:24:50 by mfunakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*ptr_dst;
	const unsigned char	*ptr_src;
	size_t	i;

	ptr_dst = dst;
	ptr_src = src;
	i = 0;
	while (n > i)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (ptr_dst);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
		char	a[] = "Hello";
	printf("元 = 「%s」\n", a);
	printf("memcpy = 「%s」\n", (char *)memcpy(a, "ABCD", 4));
	printf("ft_memcpy = 「%s」\n", (char *)ft_memcpy(a, "ABCD", 4));

	char	b[] = "wor ld!";
	printf("\n元 = 「%s」\n", b);
	printf("memcpy = 「%s」\n", (char *)memcpy(b, "tttt", 2));
	printf("ft_memcpy = 「%s」\n", (char *)ft_memcpy(b, "tttt", 2));

	char	c[] = "#\t%&\n";
	printf("\n元 = 「%s」\n", c);
	printf("memcpy = 「%s」\n", (char *)memcpy(c, "1234", 3));
	printf("ft_memcpy = 「%s」\n", (char *)ft_memcpy(c, "1234", 3));

	char	d[] = "123456789";
	printf("\n元 = 「%s」\n", d);
	printf("memcpy = 「%s」\n", (char *)memcpy(d, "123456789", 10));
	printf("ft_memcpy = 「%s」\n", (char *)ft_memcpy(d, "123456789", 10));

	char	e[] = "abcdefg";
	printf("\n元 = 「%s」\n", e);
	printf("memcpy = 「%s」\n", (char *)memcpy(e, "123456789", 0));
	printf("ft_memcpy = 「%s」\n", (char *)ft_memcpy(e, "123456789", 0));

	char	f[] = "123456";
	printf("\n元 = 「%s」\n", f);
	printf("memcpy = 「%s」\n", (char *)memcpy(f, f, 3));
	printf("ft_memcpy = 「%s」\n", (char *)ft_memcpy(f, f, 3));

	char	g[] = "123456";
	printf("\n元 = 「%s」\n", g);
	printf("memcpy = 「%s」\n", (char *)memcpy(g +2, g, 4));
	printf("ft_memcpy = 「%s」\n", (char *)ft_memcpy(g +2, g, 4));

	char	h[] = "123456";
	printf("\n元 = 「%s」\n", h);
	printf("memcpy = 「%s」\n", (char *)memcpy(h, h + 3, 5));
	printf("ft_memcpy = 「%s」\n", (char *)ft_memcpy(h, h + 3, 5));

	return (0);
}

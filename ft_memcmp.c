/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstrasse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 12:46:55 by jstrasse          #+#    #+#             */
/*   Updated: 2025/10/01 16:32:00 by jstrasse         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1tmp;
	unsigned char	*s2tmp;
	size_t			i;

	i = 0;
	s1tmp = (unsigned char *)s1;
	s2tmp = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1tmp[i] != s2tmp[i])
			return (s1tmp[i] - s2tmp[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*msg;
	char	*test;

	msg = "Hello";
	test = "Hfllo";
	printf("%d\n", ft_memcmp(msg, test, 5));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstrasse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 12:18:10 by jstrasse          #+#    #+#             */
/*   Updated: 2025/10/01 16:32:26 by jstrasse         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*srctmp;
	unsigned char	ctmp;

	i = 0;
	srctmp = (unsigned char *)src;
	ctmp = (unsigned char) c;
	while (i < n)
	{
		if (srctmp[i] == ctmp)
			return ((void *)&srctmp[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*src;
	char	*result;
	src = "Hello Gangsta";
	result = ft_memchr(src, 'g', 12);
	if (result)
		printf("Found: '%c' at position %ld\n", *result, result - src);
	else
		printf("Character not found in source\n");
	return (0);
}
*/

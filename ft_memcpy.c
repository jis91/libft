/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstrasse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:51:16 by jstrasse          #+#    #+#             */
/*   Updated: 2025/10/02 17:04:42 by jstrasse         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*srctmp;
	unsigned char	*desttmp;

	srctmp = (unsigned char *) src;
	desttmp = (unsigned char *) dest;
	i = 0;
	if (!(dest || src))
		return (NULL);
	while (i < n)
	{
		desttmp[i] = srctmp[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	*src;
	char	dest[20];

	src = "Hello there !";
	ft_memcpy(dest, src, (ft_strlen(src) + 1));
	printf("%s\n", dest);
	return (0);
}*/

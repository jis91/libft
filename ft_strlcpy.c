/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstrasse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:05:18 by jstrasse          #+#    #+#             */
/*   Updated: 2025/10/01 16:36:55 by jstrasse         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (dsize > 0)
	{
		while (i < dsize - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
/*
int	main(void)
{
	char	buffer[8];
	char	*msg;
	size_t	len;

	len = 0;
	msg = "Hello There !";
	len = ft_strlcpy(buffer, msg, sizeof(buffer));
	printf("Source length is %zu,\nBuffer : %s\n", len, buffer);
	return (0);
}*/

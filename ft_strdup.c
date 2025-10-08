/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstrasse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:08:11 by jstrasse          #+#    #+#             */
/*   Updated: 2025/10/01 16:36:17 by jstrasse         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	size_t	i;
	char	*dup;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	if (src == 0)
		return (NULL);
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main(void)
{
	char *src;
	char *result;

	src = "Hello World Here I Am";
	result = ft_strdup(src);
	printf("%s\n", result);
	return (0);
}*/	

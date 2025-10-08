/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstrasse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:03:51 by jstrasse          #+#    #+#             */
/*   Updated: 2025/10/08 10:08:44 by jstrasse         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	size_t	i;
	char	a;

	a = (char) c;
	i = 0;
	while (src[i])
	{
		if (src[i] == a)
			return ((char *)&src[i]);
		i++;
	}
	if (src[i] == a)
		return ((char *) &src[i]);
	return (NULL);
}
/*
int	main(void)
{
	char	*src;
	char	*result;

	src = "Hello Gangsta";
	result = ft_strchr(src, 'b');	

	if (result)
		printf("Found: '%c' at position %ld\n", *result, result - src);
	else 
		printf("Character not found in source\n");
	return (0);
}
*/

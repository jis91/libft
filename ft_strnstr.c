/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstrasse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:01:10 by jstrasse          #+#    #+#             */
/*   Updated: 2025/10/01 16:37:33 by jstrasse         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		while (i + j < len && big[i + j]
			&& little[j] && big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
		j = 0;
	}
	return (NULL);
}
/*
int	main(void)
{
	char *big;
	char *little;
	char *result;

	big = "Hello Grand Master";
	little = "Grand Master";
	result = ft_strnstr(big, little, 18);
	if (result)
		printf("%s\n", result);
	else
		printf("Not found\n");
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstrasse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:28:59 by jstrasse          #+#    #+#             */
/*   Updated: 2025/10/01 16:35:48 by jstrasse         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*result;
	size_t			total;

	total = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	result = malloc(total);
	if (!result)
		return (NULL);
	ft_bzero(result, total);
	return (result);
}
/*
int	main(void)
{
	int	*test;
	int	i;

	i = 0;
	test = (int *)ft_calloc(5, sizeof(int));
	if (test == NULL)
	{
		printf("Memory allocation failed");
		return (1);
	}
	while (i < 5)
	{
		printf("test[%d] = %d\n", i, test[i]);
		i++;
	}
	free(test);
	return (0);
}*/

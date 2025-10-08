/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstrasse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:12:22 by jstrasse          #+#    #+#             */
/*   Updated: 2025/10/08 10:08:28 by jstrasse         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	size_t	i;
	char	*result;
	char	a;

	a = (char) c;
	result = NULL;
	i = 0;
	while (src[i])
	{
		if (src[i] == a)
			result = (char *) &src[i];
		i++;
	}
	if (src[i] == a)
		result = (char *) &src[i];
	return (result);
}
/*
int     main(void)
{
        char    *src;
        char    *result;

        src = "Hello Ggangsta";
        result = ft_strrchr(src, '\0');   

        if (result)
                printf("Found: '%c' at position %ld\n", *result, result - src);
        else 
                printf("Character not found in source\n");
        return (0);
}*/

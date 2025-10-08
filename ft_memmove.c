/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstrasse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:52:18 by jstrasse          #+#    #+#             */
/*   Updated: 2025/10/08 10:10:25 by jstrasse         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dtmp;
	unsigned char	*stmp;
	size_t			i;

	i = 0;
	dtmp = (unsigned char *) dest;
	stmp = (unsigned char *) src;
	if (!(dest || src))
		return (NULL);
	if (dtmp > stmp && dtmp < stmp + n)
	{
		while (n > 0)
		{
			n--;
			dtmp[n] = stmp[n];
		}
		return (dest);
	}
	while (i < n)
	{
		dtmp[i] = stmp[i];
		i++;
	}
	return (dest);
}
/*
int 	main(void)
{
    char buffer[20] = "1234567890";

    // Non-overlapping: copy first 5 chars to the end 1234517890, 1234512890, etc
    ft_memmove(buffer + 5, buffer, 5);
    printf("%s\n", buffer);  // Expected: 1234512345

    // Overlapping: move last 5 chars to the beginning 1234567895, 123456745 etc
    ft_memmove(buffer, buffer + 5, 5);
    printf("%s\n", buffer);      // Expected: 1234512345

    return (0);
}*/

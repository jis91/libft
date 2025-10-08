/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstrasse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:04:13 by jstrasse          #+#    #+#             */
/*   Updated: 2025/10/08 10:11:56 by jstrasse         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	if (dlen >= dsize)
		dlen = dsize;
	if (dlen == dsize)
		return (dsize + slen);
	if (slen < dsize - dlen)
		ft_memcpy(dest + dlen, src, slen + 1);
	else
	{
		ft_memcpy(dest + dlen, src, dsize - dlen -1);
		dest[dsize - 1] = '\0';
	}
	return (dlen + slen);
}
/*
int	main(void)
{
	char 	*src;
	char	dest[15] = "hello";
	size_t 	tmp;

	src = " beautiful creature";
	tmp = ft_strlcat(dest, src, sizeof(dest));
	printf("Dest: \"%s\"\n", dest);	//Expected: "hello beautifu"
	printf("Return: %zu\n", tmp);           // Expected: 5 + 19 = 24
    if (tmp >= sizeof(dest))
        printf("Truncation occurred.\n");
	
    return (0);
}*/

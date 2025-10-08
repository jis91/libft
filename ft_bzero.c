/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstrasse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:46:50 by jstrasse          #+#    #+#             */
/*   Updated: 2025/10/01 16:34:32 by jstrasse         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = (unsigned char *) s;
	while (i < n)
	{
		tmp[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	buffer[20] = "test1";
	char	buffer1[20] = "test2";

	printf("buffer before bzero : %s\n", buffer);
	printf("buffer1 before ft_bzero:  %s\n", buffer1);
	bzero(buffer, 4);
	ft_bzero(buffer1, 5);
	printf("buffer after bzero : %s\n", buffer);
	printf("buffer1 after ft_bzero: %s\n", buffer1);
	return (0);
}*/

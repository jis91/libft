/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstrasse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:48:25 by jstrasse          #+#    #+#             */
/*   Updated: 2025/10/01 16:30:06 by jstrasse         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	c;
	char	d;
	char	e;
	char	f;

	c = 'a';
	d = 'G';
	e = '8';
	f = '{';
	printf("%d\n",ft_isalnum(c));
	printf("%d\n",ft_isalnum(d));
	printf("%d\n",ft_isalnum(e));
	printf("%d\n",ft_isalnum(f));
	return (0);
}*/

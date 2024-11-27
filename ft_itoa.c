/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 03:18:48 by gsampaio          #+#    #+#             */
/*   Updated: 2024/11/20 03:18:59 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_leng(int n)
{
	int	leng;

	leng = (n <= 0);
	while (n != 0)
	{
		n /= 10;
		leng++;
	}
	return (leng);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		leng;
	long	p;

	p = n;
	leng = n_leng(n);
	str = (char *)malloc(leng + 1);
	if (!str)
		return (NULL);
	str[leng] = '\0';
	if (p < 0)
	{
		str[0] = '-';
		p = -p;
	}
	while (leng-- > (n < 0))
	{
		str[leng] = (p % 10) + '0';
		p /= 10;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
	int x = 123;
	char *str;
	
	str = ft_itoa(x);
	printf("%s\n", str);
	free(str);
}*/

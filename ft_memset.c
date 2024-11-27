/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 02:21:17 by gsampaio          #+#    #+#             */
/*   Updated: 2024/11/07 04:47:22 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len > 0)
	{
		*p = (unsigned char)c;
		p++;
		len--;
	}
	return (b);
}
/*
#include <stdio.h>

int main(void)
{
	char str[25] = "bora boi";

	ft_memset(str + 4, 'a', 4);
	printf("%s\n", str);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 05:38:44 by gsampaio          #+#    #+#             */
/*   Updated: 2024/11/06 05:49:12 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*f;
	unsigned char	x;

	f = (unsigned char *)s;
	x = (unsigned char)c;
	while (n--)
	{
		if (*f == x)
			return ((void *)f);
		f++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 03:37:27 by gsampaio          #+#    #+#             */
/*   Updated: 2024/11/06 06:31:41 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	destlen = 0;
	srclen = 0;
	i = 0;
	while (dest[destlen] && destlen < destsize)
		destlen++;
	while (src[srclen])
		srclen++;
	if (destlen >= destsize)
		return (destlen + srclen);
	while (src[i] && (destlen + i) < (destsize - 1))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (srclen + destlen);
}

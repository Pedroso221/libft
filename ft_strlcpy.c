/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 03:06:18 by gsampaio          #+#    #+#             */
/*   Updated: 2024/11/27 03:04:46 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	srclen;
	size_t	i;

	srclen = 0;
	i = 0;
	if (!src)
		return (0);
	while (src[srclen])
		srclen++;
	if (!dest || destsize == 0)
		return (srclen);
	while (i < (destsize - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (destsize > 0)
		dest[i] = '\0';
	return (srclen);
}

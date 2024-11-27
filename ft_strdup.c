/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 04:23:39 by gsampaio          #+#    #+#             */
/*   Updated: 2024/11/27 03:38:01 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	size;
	size_t	i;

	if (!s)
		return (NULL);
	size = 0;
	i = 0;
	while (s[size])
		size++;
	dup = malloc(size + 1);
	if (!dup)
		return (NULL);
	while (i < size)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

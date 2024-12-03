/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 03:28:26 by gsampaio          #+#    #+#             */
/*   Updated: 2024/11/20 04:34:34 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count != 0 && count > ((size_t) - 1) / size)
		return (NULL);
	ptr = (void *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}
/*
#include <stdio.h>

int main()
{
	char *str;
	int i = 0;

	str = ft_calloc(10, sizeof(char));
	printf("Depois de calloc:  \n");
	while (i < 10)
	{
		if (str[i] == '\0')
			printf("str[%d] = \\0\n", i);
		else
			printf("str[%d] = %c\n", i, str[i]);
		i++;
	}
}*/

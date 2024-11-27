/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <gsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 02:56:07 by gsampaio          #+#    #+#             */
/*   Updated: 2024/11/21 05:23:32 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>

int main()
{
	char str[] = "123456789Aqui estamos!";
	int	i = 0;

	printf("Antes: %s\n", str);
	ft_bzero(str, 9);
	printf("Depois: ");
	while (i < 22)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 02:03:09 by gsampaio          #+#    #+#             */
/*   Updated: 2024/11/20 05:11:53 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main()
{
	char n[] = {'0', '9', 'a', 'A', '\t', ' '};
	int s = sizeof(n) / sizeof(n[0]);
	int i = 0;

	while(i < s)
	{
		if (ft_isalnum(n[i]) == 1)
			printf("'%c' is alnum\n", n[i]);
		else
			printf("'%c' is not alnum\n", n[i]);
		i++;
	}
}*/

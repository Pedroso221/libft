/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 03:32:11 by gsampaio          #+#    #+#             */
/*   Updated: 2024/11/17 04:28:00 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*connected;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	connected = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!connected)
		return (NULL);
	while (s1[i])
	{
		connected[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		connected[i] = s2[j];
		i++;
		j++;
	}
	connected[i] = '\0';
	return (connected);
}
/*
#include <stdio.h>

int main()
{
	char s1[] = "junta ";
	char s2[] = "ai";
	char *connected;

	connected = ft_strjoin(s1, s2);
	if (connected)
	{
		printf("%s\n", connected);
		free(connected);
	}
	else
		printf("n deu para juntar\n");
}*/

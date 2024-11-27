/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 04:29:09 by gsampaio          #+#    #+#             */
/*   Updated: 2024/11/20 04:02:12 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	verify_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	get_start(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && verify_set(s1[start], set))
		start++;
	return (start);
}

static size_t	get_end(char const *s1, char const *set, size_t start)
{
	size_t	end;

	end = ft_strlen(s1);
	while (end > start && verify_set(s1[end - 1], set))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	start = get_start(s1, set);
	end = get_end(s1, set, start);
	len = end - start;
	trimmed = (char *)malloc((len + 1) * sizeof(char));
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, &s1[start], len);
	trimmed[len] = '\0';
	return (trimmed);
}
/*
#include <stdio.h>

int main()
{
	char original[] = "$$$limpa$$$ $$isso$$$$";
	char clear[] = "$";
	char *result = ft_strtrim(original, clear);

	printf("%s\n", result);
}*/

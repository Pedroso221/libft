/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 05:10:16 by gsampaio          #+#    #+#             */
/*   Updated: 2024/11/18 05:28:10 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

char check_digit(unsigned int index, char c)
{
    (void)index;
    if (!ft_isdigit(c))
        return '*';
    return c;
}

int main()
{
    char s1[] = "1123tira0os3numeros2";
    char *s2;

    s2 = ft_strmapi(s1, check_digit);

    printf("Original: %s\n", s1);
    printf("Alterado: %s\n", s2);
    free(s2);
    return (0);
}*/

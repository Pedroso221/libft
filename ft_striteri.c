/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 04:29:45 by gsampaio          #+#    #+#             */
/*   Updated: 2024/11/18 05:08:26 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void check_digit(unsigned int index, char *c)
{
    (void)index;
    if (!ft_isdigit(*c))
        *c = '*';
}

int main()
{
    char str[] = "42Libft123Teste";

    printf("Original: %s\n", str);
    ft_striteri(str, check_digit);

    printf("Alterado: %s\n", str);
    return (0);
}
*/

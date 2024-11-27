/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 04:52:05 by gsampaio          #+#    #+#             */
/*   Updated: 2024/11/17 06:01:44 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_count(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*malloc_word(char const *s, char c)
{
	char	*word;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void	free_words(char **words, int i)
{
	while (i >= 0)
		free(words[i--]);
	free(words);
}

static int	fill_words(char **result, char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			result[i] = malloc_word(s, c);
			if (!result[i])
			{
				free_words(result, i - 1);
				return (0);
			}
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = words_count(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (!fill_words(result, s, c))
		return (result);
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
	char **divided;
	char s[] = "0divide0tudo0sem00medo";
	char d = '0';
	int i = 0;

	divided = ft_split(s, d);
	while (divided[i])
	{
		printf("%d-%s\n",i + 1, divided[i]);
		free(divided[i]);
		i++;
	}
	free(divided);
}*/

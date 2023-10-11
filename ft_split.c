/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:54:28 by yabrodri          #+#    #+#             */
/*   Updated: 2023/10/11 17:45:15 by yabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	size_t	countwords(const char *s, char c)
{
	size_t			words;
	size_t			i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		if (s[i])
			words++;
	}
	return (words);
}

static	char	**getwords(const char *s, char c, size_t numwords)
{
	size_t			i;
	size_t			j;
	unsigned int	start;
	char			**str_arr;

	i = 0;
	j = 0;
	start = 0;
	str_arr = (char **)malloc(sizeof(char *) * numwords + 1);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (s[i])
			str_arr[j++] = ft_substr(s, start, (i - start));
	}
	str_arr[j] = NULL;
	return (str_arr);
}

char	**ft_split(const char *s, char c)
{
	char	**str_arr;
	size_t	numwords;

	numwords = countwords(s, c);
	str_arr = getwords(s, c, numwords);
	return (str_arr); 
}

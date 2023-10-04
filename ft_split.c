/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:54:28 by yabrodri          #+#    #+#             */
/*   Updated: 2023/10/04 11:54:31 by yabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(const char *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	s1_len;
	unsigned int	s2_len;
	char		**arr_str;

	i = 0;
	while (s[i] != c)
	{
		i++;
	}
	s1_len = i + 1;
	s2_len = ft_strlen(s) - s1_len;
	arr_str = (char **)malloc(2 * sizeof(char *));
	if (!arr)
		return (NULL);
	j = 0;
	arr_str[j] = (char *)malloc((s1_len * sizeof(char)) + 1);
	if (!arr_str[j++])
		return (NULL);
	arr_str[j] = (char *)malloc((s2_len * sizeof(char)) + 1);
	if (!arr_str[j--])
		return (NULL);
	while (j < i)
	{
		*arr_str[j] = s[j];
		j++;
	}
	*arr_str[j] = '\0';

}

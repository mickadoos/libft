/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:47:03 by yabrodri          #+#    #+#             */
/*   Updated: 2023/09/19 19:17:39 by yabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*temp;

	i = 0;
	if (*haystack == '\0' && *needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i <= len - 1 && len != 0)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			temp = (char *)(haystack + i);
			while (haystack[i] == needle[j] && needle[j] != '\0')
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return (temp);
		}
		else
			i++;
	}
	return (NULL);
}

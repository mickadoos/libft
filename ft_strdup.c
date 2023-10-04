/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:55:31 by yabrodri          #+#    #+#             */
/*   Updated: 2023/10/04 11:55:32 by yabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*strup;
	unsigned int	i;

	strup = (char *)malloc(ft_strlen(s) + 1);
	if (strup == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		strup[i] = s[i];
		i++;
	}
	strup[i] = '\0';
	return (strup);
}

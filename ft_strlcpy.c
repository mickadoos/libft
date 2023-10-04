/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:56:20 by yabrodri          #+#    #+#             */
/*   Updated: 2023/10/04 11:56:21 by yabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	fullsize;

	fullsize = 0;
	while (*src != '\0' && (fullsize < size))
	{
		*dst = *src;
		dst++;
		src++;
		fullsize++;
	}
	*dst = '\0';
	return (++fullsize);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:34:53 by yabrodri          #+#    #+#             */
/*   Updated: 2023/09/19 18:10:06 by yabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c);

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("ft_strchr of argument: %s\n", ft_strchr(argv[1], 'c'));
		printf("strchr of argument: %s\n", strchr(argv[1], 'c'));
	}
	else
		printf("No arguments passed.\n");
	return (0);
}

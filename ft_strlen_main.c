/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:50:50 by yabrodri          #+#    #+#             */
/*   Updated: 2023/09/18 13:06:11 by yabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str);

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("ft_strlen of argument: %lu\n", ft_strlen(argv[1]));
		printf("strlen of argument: %lu\n", strlen(argv[1]));
	}
	else
		printf("No arguments passed.\n");
	return (0);
}

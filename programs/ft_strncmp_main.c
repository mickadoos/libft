/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:57:20 by yabrodri          #+#    #+#             */
/*   Updated: 2023/09/19 16:58:00 by yabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc > 2)
	{
		printf("ft_strncmp:%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
		printf("Result strncmp: %d", strncmp(argv[1], argv[2], atoi(argv[3])));
	}
	else
		printf("Pass 1st and 2nd arg must be strings, 3rd must be a number");
	return (0);
}

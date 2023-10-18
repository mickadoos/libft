/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:10:17 by yabrodri          #+#    #+#             */
/*   Updated: 2023/09/19 18:41:40 by yabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	if (argc > 3)
	{
		printf("ft_strnstr:%s", ft_strnstr(argv[1], argv[2], ft_atoi(argv[3])));
		printf("\nstrnstr:%s\n", strnstr(argv[1], argv[2], ft_atoi(argv[3])));
	}
	else
		printf("Must be 2 strings for 1st and 2nd arg, and a number for 3rd.");
	return (0);
}

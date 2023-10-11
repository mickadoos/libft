/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:45:21 by yabrodri          #+#    #+#             */
/*   Updated: 2023/10/11 17:46:06 by yabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc > 2)
	{
		char	**arr;
		unsigned int	i;

		i = 0;
		printf("Arg 1: %s\n", argv[1]);
		printf("Arg 2: %s\n", argv[2]);
		arr = ft_split(argv[1], argv[2][0]);
		while (arr[i])
		{
			printf("Word %d: %s\n", i, arr[i]);
			i++;
		}
	}
	else
		printf("No arguments passed.");
	return (0);
}

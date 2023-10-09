/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:09:15 by yabrodri          #+#    #+#             */
/*   Updated: 2023/10/09 16:10:07 by yabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		char	*arg1;
		char	*arg2;
		size_t	arg3;
		size_t	total_size;

		arg1 = argv[1];
		arg2 = argv[2];
		arg3 = (size_t)ft_atoi(argv[3]);
		printf("This is arg1: %s\n", arg1);
		printf("This is arg2: %s\n", arg2);
		printf("This is arg3: %zu\n", arg3);
		printf("Return strlcat: %zu\n", ft_strlcat(arg2, arg1, arg3));
		//printf("Return strlcat: %zu\n", strlcat(arg2, arg1, arg3));
		printf("This is arg2: %s\n", arg2);
		
	}
	else
		printf("Need destination buffer, source buffer and size of string");
	return (0);
}

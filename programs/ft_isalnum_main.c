/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:28:02 by yabrodri          #+#    #+#             */
/*   Updated: 2023/09/15 13:28:05 by yabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("Result of ft_isalnum: %d\n", ft_isalnum(argv[1][0]));
		printf("Result of isalnum: %d", isalnum(argv[1][0]));
	}
	else
		printf("No arguments passed.\n");
	return (0);
}

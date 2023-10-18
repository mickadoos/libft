/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:38:38 by yabrodri          #+#    #+#             */
/*   Updated: 2023/09/15 13:38:42 by yabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("Result of ft_isascii: %d\n", ft_isascii(argv[1][0]));
		printf("Result of isascii: %d", isascii(argv[1][0]));
	}
	else
		printf("No arguments passed.\n");
	return (0);
}

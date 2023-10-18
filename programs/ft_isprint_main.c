/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:46:12 by yabrodri          #+#    #+#             */
/*   Updated: 2023/09/15 13:46:15 by yabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("Result of ft_isprint: %d\n", ft_isprint(argv[1][0]));
		printf("Result of isprint: %d", isprint(argv[1][0]));
	}
	else
		printf("No arguments passed.\n");
	return (0);
}

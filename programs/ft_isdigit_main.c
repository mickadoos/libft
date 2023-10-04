/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:16:39 by yabrodri          #+#    #+#             */
/*   Updated: 2023/09/15 13:16:44 by yabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c);

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("Result of ft_isdigit: %d\n", ft_isdigit(argv[1][0]));
		printf("Result of isdigit: %d", isdigit(argv[1][0]));
	}
	else
		printf("No arguments passed.\n");
	return (0);
}

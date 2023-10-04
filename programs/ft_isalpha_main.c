/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:03:07 by yabrodri          #+#    #+#             */
/*   Updated: 2023/09/15 13:03:52 by yabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("Result of ft_isalpha: %d\n", ft_isalpha(argv[1][0]));
		printf("Result of isalpha: %d", isalpha(argv[1][0]));
	}
	else
		printf("No arguments passed.\n");
	return (0);
}

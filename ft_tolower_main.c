/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:28:18 by yabrodri          #+#    #+#             */
/*   Updated: 2023/09/18 13:28:20 by yabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c);

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("Result ft_tolower: %d\n", ft_tolower(argv[1][0]));
		printf("Result tolower: %d\n", tolower(argv[1][0]));
	}
	else
		printf("No arguments passed.");
	return (0);
}

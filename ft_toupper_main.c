/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:15:36 by yabrodri          #+#    #+#             */
/*   Updated: 2023/09/18 13:20:50 by yabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c);

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("Result ft_toupper: %d\n", ft_toupper(argv[1][0]));
		printf("Result toupper: %d\n", toupper(argv[1][0]));
	}
	else
		printf("No arguments passed.");
	return (0);
}

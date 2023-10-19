/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:59:06 by yabrodri          #+#    #+#             */
/*   Updated: 2023/10/10 19:17:52 by yabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int	num = ft_atoi(argv[1]);
		char	*str = ft_itoa(num);

		printf("Argument 1: %d\n", num);
		printf("Result itoa: %s\n", str);
	}
	else
		printf("No arguments passed");
	return (0);
}

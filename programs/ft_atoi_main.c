/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabrodri <yabrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:58:55 by yabrodri          #+#    #+#             */
/*   Updated: 2023/09/19 17:41:12 by yabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("Result ft_atoi: %d\n", ft_atoi(argv[1]));
		printf("Result atoi: %d\n", atoi(argv[1]));
	}
	return (0);
}

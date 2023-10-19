#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		char	*ma = argv[1];
		printf("Arg: %s\n", ma);
		ma = ft_calloc(ft_atoi(argv[2]),ft_atoi(argv[3]));
		printf("return: %s\n", ma);
	}
	else
		printf("No arguments passed.");
}

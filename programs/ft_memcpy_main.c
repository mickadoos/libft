#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		char	arg1[] = "Hello mami sin manos";
		char	arg2[] = "Bye papi sin dientes";
		size_t	size = (size_t)atoi(argv[1]);

		printf("Arg 1: %s\n", arg1); 
		printf("Arg 2: %s\n", arg2); 
		printf("Size: %lu\n", size); 
		ft_memcpy(arg2, arg1, size);
		printf("Result ft_memcpy: %s\n", arg2);
		memcpy(arg1, arg2, size);
		printf("Result memcpy: %s\n", arg1);
	}
	else
		printf("No arguments passed.");
	return (0);
}

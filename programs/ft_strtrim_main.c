#include "../libft.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc > 2)
	{
		printf("String: %s\n", argv[1]);
		printf("Set: %s\n", argv[2]);
		printf("Result of ft_strtrim: %s\n", ft_strtrim(argv[1], argv[2]));	
		printf("Result length: %lu\n", ft_strlen(ft_strtrim(argv[1], argv[2])));	
	}
	else 
		printf("No arguments passed.\n");
	return (0);
}

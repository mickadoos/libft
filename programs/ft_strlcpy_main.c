#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc > 3)
	{
		int	size = atoi(argv[3]);
		char	*arg1 = argv[1];
		char	*arg2 = argv[2];
		char	*arg3 = argv[1];
		char	*arg4 = argv[2];
		printf("Result of ft_strlcpy: %lu\n", ft_strlcpy(arg2, arg1, (size_t)size));
		printf("Result of ft_strlcpy arg2: %s\n", arg2);
		printf("Result of strlcpy: %lu\n", strlcpy(arg4, arg3, (size_t)size));
		printf("Result of strlcpy arg4: %s\n", arg4);
	}
	else
		printf("No arguments passed.");
	return (0);
}

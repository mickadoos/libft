#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc > 3)
	{
		char		*arg1 = argv[1];
		unsigned int	start = atoi(argv[2]);
		size_t		len = (size_t)atoi(argv[3]);

		printf("Result of ft_substr: %s\n", ft_substr(arg1, start, len));
	}
	else
		printf("No arguments passed.");
	return (0);
}

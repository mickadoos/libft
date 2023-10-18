#include "../libft.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc > 2)
	{
		printf("First string: %s\n", argv[1]);
		printf("Second string: %s\n", argv[2]);
		printf("Result ft_strjoin: %s\n", ft_strjoin(argv[1], argv[2]));
	}
	else
		printf("No arguments passed.\n");
	return (0);
}

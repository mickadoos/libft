#include "../libft.h"
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		size_t	size = atoi(argv[1]);
		char	buffer[] = "Hello mami, sin manos!";
		char	buffer2[] = "Hello papi, sin dientes!";
		printf("Buffer before: %s\n", buffer);
		printf("Buffer2 after: %s\n", buffer2);
		printf("Result size: %lu\n", size);
		ft_bzero(buffer + size, size);
		bzero(buffer2 + size, size);
		printf("Result ft_bzero: %s\n", buffer);
		printf("Result bzero: %s\n", buffer2);
	}
	else
		printf("No arguments passed. Need num of bytes to erase.");
	return (0);
}

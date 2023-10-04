#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

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
		ft_bzero(buffer + 5, size);
		bzero(buffer2 + 5, size);
		printf("Result ft_bzero: %s\n", buffer);
		printf("Result bzero: %s\n", buffer2);
	}
	else
		printf("No arguments passed. Need num of bytes to erase.");
	return (0);
}

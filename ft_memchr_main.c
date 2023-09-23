#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(int argc, char *argv[])
{
	if (argc > 3)
	{
		size_t	size = atoi(argv[3]);
		printf("Result of ft_memchr: %s\n", memchr(argv[1], argv[2][0], size));
		printf("Result of memchr: %s\n", memchr(argv[1], argv[2][0], size));
	}
	else
		printf("Pass 1 string and 1 character to find");
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(int argc, char *argv[])
{
	if (argc > 3)
	{
		int	size = atoi(argv[3]);
		printf("Result ft_memcmp: %d\n", ft_memcmp(argv[1], argv[2], (size_t)size));
		printf("Result memcmp: %d\n", memcmp(argv[1], argv[2], (size_t)size));
	}
	else
		printf("No arguments passed.");
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n);

int	main(int argc, char *argv[])
{
	if (argc > 2)
	{
		int	value = atoi(argv[1]);
		size_t	size = (size_t)atoi(argv[2]);
		void	*buffer = malloc(1);
		printf("Result ft_memset: %s\n", ft_memset(buffer, value, size));
	}
	else
		printf("First argument, value to initialize, and 2nd number of bytes");
	return (0);
}

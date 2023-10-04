#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s);

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		char	*str = argv[1];
		printf("The arg as str: %s\n", str);
		char	*duplicate = ft_strdup(str);
		printf("The duplicate of str: %s\n", duplicate);
	}
	return (0);
}

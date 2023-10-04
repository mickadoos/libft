#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ma;
	size_t			i;

	ma = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ma[i] == (unsigned char)c)
			return ((void *)&ma[i]);
		i++;
	}
	return (0);
}

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	value;
	unsigned char 	*p;

	p = (unsigned char *)s;
	value = (unsigned char)c;
	while (p && n > 0)
	{
		if (*p == value)
		{
			return (p);
		}
		p++;
		n--;
	}
	return (NULL);
}

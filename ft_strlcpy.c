#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	fullsize;

	fullsize = 0;
	while (*src != '\0' && (fullsize < size))
	{
		*dst = *src;
		dst++;
		src++;
		fullsize++;
	}
	*dst = '\0';
	return (++fullsize);
}

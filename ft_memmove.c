#include <stddef.h>
#include <stdio.h>

void    *ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*temp;
	int	arr[10];

	temp = ft_memcpy(temp, src, n);
	printf("This is temp from memmove: %s\n", temp);
	printf("Dest: %lu\n", sizeof(dest));
	ft_memcpy(temp + n, dest, sizeof(dest));
	printf("Result temp from memmove: %s\n", temp);
	dest = temp;
	printf("Result dest from memmove: %s\n", dest);
	return (dest);
}

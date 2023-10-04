#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char		*substr;
	
	i = 0;
	if (ft_strlen(s) + 1 < len)
		substr = (char *)malloc(ft_strlen(s) + 1);
	else
		substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	if (!(start >= ft_strlen(s)))
	{
		while (s[start + i] != '\0' && i < len)
		{
			substr[i] = s[start + i];
			i++;
		}
	}
	substr[i] = '\0';
	return (substr);

}

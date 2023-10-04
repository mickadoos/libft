#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strjoin(const char *s1, const char *s2)
{
	char		*str;
	unsigned int	i;
	unsigned int	j;

	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		str[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		str[j++] = s2[i++];
	str[j] = '\0';
	return (str);
}

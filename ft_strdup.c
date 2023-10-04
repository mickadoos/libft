#include <stdlib.h>
#include <stddef.h>

size_t	ft_strlen(const char *str);

char	*ft_strdup(const char *s)
{
	char		*strup;
	unsigned int	i;

	strup = (char *)malloc(ft_strlen(s) + 1);
	if (strup == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		strup[i] = s[i];
		i++;
	}
	strup[i] = '\0';
	return (strup);
}

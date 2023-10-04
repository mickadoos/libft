#include <stdlib.h>

size_t	ft_strlen(const char *s);

unsigned int	is_white_space(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

unsigned int	get_first_position(const char *str)
{
	unsigned int	i;

	i = 0;
	while (is_white_space(str[i]))
		i++;
	return (i);
}

unsigned int	get_last_position(const char *str)
{
	unsigned int	i;

	i = ft_strlen(str) - 1;
	while (is_white_space(str[i]))
		i--;
	return (i);
}

unsigned int	to_trim(const char *s1, const char *set, unsigned int *start, unsigned int *end)
{
	unsigned int	i;
	
	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s1[*start])
		{
			i = 0;
			*start += 1;
		}
		else if (set[i] == s1[*end])
		{
			i = 0;
			*end -= 1;
		}
		else
			i++;
	}
	return (*end - *start);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char		*trim;
	unsigned int	start;
	unsigned int	end;
	unsigned int	trim_len;
	unsigned int	i;

	start = get_first_position(s1);
	end = get_last_position(s1);
	trim_len = to_trim(s1, set, &start, &end);
	trim = (char *)malloc(trim_len + 1);
	if (!trim)
		return (NULL);
	i = 0;
	while (start <= end)
		trim[i++] = s1[start++];
	if (ft_strlen(trim))
		trim[i] = '\0';
	return (trim);
}

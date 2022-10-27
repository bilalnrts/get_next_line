#include "ft_get_next_line.h"

int	ft_strlen(char *str, int format)
{
	int	i;

	i = 0;
	if (format == 0)
	{
		while (str[i])
			i++;
	}
	else if (format == 1)
	{
		while (str[i] && str[i] != '\0')
			i++;
	}
	return (i);
}

int	ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	if (!str)
		return 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = '\0';
	}
	str = malloc(ft_strlen(s1, 0) + ft_strlen(s2, 0) + 1);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*get_line(char *str)
{
	char	*s1;
	int		i;

	i = 0;
	s1 = malloc(ft_strlen(str, 1) + 2);
	while (str[i] && str[i] != '\n')
	{
		s1[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		s1[i] = '\n';
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

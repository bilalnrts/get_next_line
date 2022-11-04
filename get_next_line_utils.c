#include "get_next_line.h"

char ft_strchr(char *str, char c)
{
	if (!str)
		return 0;
	while (*str)
	{
		if (*str == c)
			return 1;
		str++;
	}
	return 0;
}

int ft_strlen(char *str) //this function returns lenght of string
{
	int i = 0;
	if (!str)
		return 0;
	while(str[i])
		i++;
	return i;
}

char *ft_strjoin(char *s1, char *s2)//this function concatenates two stirng (s1 && s2) and returns a new string.
{
	char *str;
	int i = 0;
	int j = 0;

	if (!s1)
		{
			s1 = malloc(1);
			s1[0] = '\0';
		}
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !str)
		return 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

char *get_line(char *str)
{
	int i = 0;
	char *s1;

	while (str[i] && str[i] != '\n')
		i++;
	s1 = malloc(i + 2);
	if (!s1)
		return 0;
	i = 0;
	while (str[i] != '\n' && str[i])
	{
		s1[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		s1[i++] = '\n';
	s1[i] = '\0';
	return s1;
}

char *next_str(char *str)
{
	int i = 0;
	int j = 0;
	int tf = 0;
	char *s2 = malloc(1);
	s2[0] = '\0';
	char *s1 = malloc(ft_strlen(str) + 1);
	while(str[i])
	{
		if (str[i] == '\n')
		{
			tf = 1;
			break;
		}
		i++;
	}
	if (tf)
	{
		while (str[++i])
			s1[j++] = str[i];
		s1[j] = 0;
		free(s2);
		return s1;
	}
	return s2;
}

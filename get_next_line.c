#include "get_next_line.h"

char *read_the_line(char *str, int fd)
{
	int buff;
	char *s1;
	s1 = malloc(BUFFER_SIZE + 1);

	buff = 1;
	while (!ft_strchr(str, '\n') && buff)
	{
		buff = read(fd, s1, BUFFER_SIZE);
		if (buff == -1)
		{
			free(s1);
			break ;
		}
		s1[buff] = '\0';
		str = ft_strjoin(str,s1);
	}
	free(s1);
	return str;
}

char *get_next_line(int fd)
{
	char *line;
	static char *str;

	str = read_the_line(str, fd);
	line = get_line(str);
	str = next_str(str);
	return line;
}


int main()
{
	int fd = open("test.txt", O_RDONLY);
	char *str = get_next_line(fd);
	printf("%s", str);
	str = get_next_line(fd);
	printf("%s", str);
	str = get_next_line(fd);
	printf("%s", str);
	str = get_next_line(fd);
	printf("%s", str);
	str = get_next_line(fd);
	printf("%s", str);
	str = get_next_line(fd);
	printf("%s", str);
	str = get_next_line(fd);
	printf("%s", str);
	str = get_next_line(fd);
	printf("%s", str);
	str = get_next_line(fd);
	printf("%s", str);
	str = get_next_line(fd);
	printf("%s", str);
	str = get_next_line(fd);
	printf("%s", str);
	str = get_next_line(fd);
	printf("%s", str);
	return 0;
}

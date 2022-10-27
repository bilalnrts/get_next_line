#include "ft_get_next_line.h"

char	*read_line(int fd, char *str)
{
	char	*buff;
	int		rbytes;

	buff = malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (0);
	rbytes = 1;
	int i = 1;
	while (!ft_strchr(str, '\n') && !rbytes)
	{
		rbytes = read(fd, buff, BUFFER_SIZE);
		if (rbytes == -1)
		{
			free(buff);
			return (0);
		}
		buff[rbytes] = '\0';
		str = ft_strjoin(str, buff);
	}
	free(buff);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	str = read_line(fd, str);
	if (!str)
		return (0);
	line = get_line(str);
	return (line);
}

int main()
{

	int i = open("text.txt", O_RDONLY);
	char *s;
	s = get_next_line(i);
	printf("%s", s);

	/*char s[20] = "bilal salih";
	char s3[20] = "hello";
	int fd = open("text.txt", O_RDONLY);
	char *str;
	char *s2 = read_line(fd, str);
	int i = ft_strchr(s, 's');
	int j = ft_strlen(s, 0);
	printf("%s", s2);
	printf("%d", i);
	printf("%d", j);
	return 0;*/
}

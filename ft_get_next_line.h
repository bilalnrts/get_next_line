#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*get_next_line(int fd);
int		ft_strlen(char *str, int format);
char	*ft_strjoin(char *src, char *dest);
char	*get_line(char *str);
int	ft_strchr(char *str, char c);
#endif

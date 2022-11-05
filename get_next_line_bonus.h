#ifndef GET_NEXT_LINE_BONUS
# define GET_NEXT_LINE_BONUS

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif

# include <stdlib.h>
# include <unistd.h>

char	ft_strchr(char *str, char c);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(char *str);
char	*get_line(char *str);
char	*next_str(char *str);
char *read_the_line(char *str, int fd);
char *get_next_line(int fd);

#endif

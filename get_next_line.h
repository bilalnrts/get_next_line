#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

# define BUFFER_SIZE 1

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char ft_strchr(char *str, char c);
char *ft_strjoin(char *s1, char *s2);
int ft_strlen(char *str);
char *get_line(char *str);
#endif

# ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 400
# endif 

# ifndef OPEN_MAX
#  define OPEN_MAX
# endif

# include "printf/ft_printf.h" 
# include <unistd.h>
# include <stdbool.h>
# include <ctype.h>
# include <errno.h>
# include <float.h>
# include <limits.h>
# include <math.h>
# include <string.h>
# include <stdarg.h>
# include <time.h>
# include <wchar.h>
# include <fcntl.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

# define AC_BLACK "\x1b[30m"
# define AC_REDI "\x1b[31m"
# define AC_GREEN "\x1b[32m"
# define AC_YELLOW "\x1b[33m"
# define AC_BLUE "\x1b[34m"
# define AC_MAGENTA "\x1b[35m"
# define AC_CYAN "\x1b[36m"
# define AC_WHITE "\x1b[37m"
# define AC_NORMAL "\x1b[m"
# define CBLACK "\033[1;3m]"    
# define CRED "\033[1;31m]"
# define CGREEN "\033[1;32m]"
# define CYELLOW "\033[1;33m]"
# define CBLUE "\033[1;34m]"
# define CMAGENTA "\033[1;35m]"
# define CCYAN "\033[1;36m]"
# define CWHITE "\033[1;37m]"

char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);

// typedef struct s_list
// {
//     char            *s_buf;
//     struct s_list   *next;
//                 t_list;
// };


#endif
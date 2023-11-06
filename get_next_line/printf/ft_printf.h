/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:11:32 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/10/23 16:57:06 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdint.h>
# include <limits.h>
# include <ctype.h>
# include <fcntl.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

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

int		ft_printf(const char *input, ...);
int		ft_print_hex(unsigned int nb, int format);
int		ft_print_nb(int n);
int		ft_print_str(const char *str);
int		ft_print_unbr(unsigned int n);
int		check_base(const char *base);
char	*ft_uitoa(unsigned int n);
int		ft_print_char(int c);
int		ft_putptr(uintptr_t nb);
size_t	ft_hexnumberlen(unsigned int nb);
size_t	ft_ptr_len(uintptr_t n);

#endif

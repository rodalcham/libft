/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 09:17:25 by rchavez@stu       #+#    #+#             */
/*   Updated: 2024/06/25 13:41:51 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int					ft_printchar(int c);
int					ft_printstr(char *str);
int					ft_printptr(void *ptr);
int					ft_printf(const char *str, ...);
int					ft_printunsigned(unsigned int num);
int					numlen(long unsigned num, int base);
long unsigned int	ft_pow(unsigned int a, unsigned int b);
int					ft_printnum(long unsigned num, int base);
int					ft_fill(va_list *arg_p, const char **str);

char				*ftp_itoa(int n);
char				*ft_uitoa(unsigned int number);
char				*ft_strapd(char *str, char *c);
char				*base_to(long unsigned num, int b, char *base);

size_t				ft_pstrlen(const char *s);

#endif

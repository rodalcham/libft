/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:08:15 by rchavez@stu       #+#    #+#             */
/*   Updated: 2024/06/25 09:53:29 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		ft_strlen_nl(char *str);
int		search_nl(char str[]);

char	*get_next_line(int fd);
char	*ft_join(char *str, char *buffer);

void	ft_clean(char *buffer);
void	ft_cpy(char *src, char *dst);

#endif

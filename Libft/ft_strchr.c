/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez@student.42heilbronn.de <rchavez    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:49:10 by rchavez@stu       #+#    #+#             */
/*   Updated: 2024/03/10 10:33:50 by rchavez@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str && *str != (char) c)
	{
		str++;
	}
	if (*str || !(char)c)
		return (str);
	else
		return (NULL);
}

// #include <unistd.h>
// int main (void)
// {
// 	char str[] = "Hello World";
// 	int a = '\0';
// 	char *res = ft_strchr(&str[0], a);
// 	write(1, res, 1);
// }
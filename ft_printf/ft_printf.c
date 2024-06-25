/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 09:15:03 by rchavez@stu       #+#    #+#             */
/*   Updated: 2024/03/19 09:57:45 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		len;
	int		total;
	va_list	arg_p;

	total = 0;
	va_start(arg_p, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			len = ft_fill(&arg_p, &str);
			str++;
		}
		else
			len = write(1, str++, 1);
		if (len == -1)
			return (-1);
		total += len;
	}
	va_end(arg_p);
	return (total);
}

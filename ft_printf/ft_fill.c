/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:56:44 by rchavez@stu       #+#    #+#             */
/*   Updated: 2024/03/19 11:29:27 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_fill(va_list *arg_p, const char **str)
{
	if (**str == 'c')
		return (ft_printchar(va_arg(*arg_p, int)));
	else if (**str == 's')
		return (ft_printstr(va_arg(*arg_p, char *)));
	else if (**str == 'p')
		return (ft_printptr(va_arg(*arg_p, void *)));
	else if (**str == 'd')
		return (ft_printnum(va_arg(*arg_p, int), 10));
	else if (**str == 'i')
		return (ft_printnum((unsigned)va_arg(*arg_p, unsigned int), 10));
	else if (**str == 'u')
		return (ft_printunsigned(va_arg(*arg_p, unsigned int)));
	else if (**str == 'x')
		return (ft_printnum((unsigned)va_arg(*arg_p, int), 16));
	else if (**str == 'X')
		return (ft_printnum((unsigned)va_arg(*arg_p, int), 32));
	else if (**str == '%')
		return (ft_printchar('%'));
	else
		return (-1);
}

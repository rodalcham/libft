/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:48:52 by rchavez@stu       #+#    #+#             */
/*   Updated: 2024/03/19 16:22:45 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	rec_printptr(unsigned long a, char *base, int *count)
{
	if (a)
	{
		rec_printptr(a / 16, base, count);
		if (ft_printchar(base[a % 16]) == -1)
		{
			*count = -1;
			return (*count);
		}
		(*count)++;
	}
	return (*count + 2);
}

int	ft_printptr(void *ptr)
{
	unsigned long	a;
	int				count;

	a = (unsigned long)ptr;
	count = 0;
	if (write(1, "0x", 2) == -1)
		return (-1);
	if (a == 0)
	{
		if (write(1, "0", 1) == -1)
			return (-1);
		else
			return (3);
	}
	return (rec_printptr(a, "0123456789abcdef", &count));
}

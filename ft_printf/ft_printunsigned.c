/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:20:08 by rchavez           #+#    #+#             */
/*   Updated: 2024/03/25 09:26:27 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int num)
{
	char	*str;
	int		len;

	str = ft_uitoa(num);
	if (!str)
		return (-1);
	len = ft_printstr(str);
	free(str);
	return (len);
}

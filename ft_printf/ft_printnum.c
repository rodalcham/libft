/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:02:52 by rchavez@stu       #+#    #+#             */
/*   Updated: 2024/06/25 13:41:55 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnum(unsigned long num, int base)
{
	char	*str;
	int		len;

	if (base == 10)
	{
		str = ftp_itoa((int)num);
	}
	else
	{
		if (base == 16)
			str = base_to(num, 16, "0123456789abcdef");
		else
			str = base_to(num, 16, "0123456789ABCDEF");
	}
	if (!str)
		return (-1);
	len = ft_printstr(str);
	free(str);
	return (len);
}

char	*base_to(unsigned long num, int b, char *base)
{
	char	*ret;
	int		len;

	len = numlen(num, b);
	ret = (char *)malloc(sizeof(char) * len);
	if (!ret)
		return (NULL);
	ret[--len] = '\0';
	while (--len >= 0)
	{
		ret[len] = base[num % b];
		num /= b;
	}
	return (ret);
}

int	numlen(unsigned long num, int base)
{
	int	ret;

	ret = 0;
	if (num == 0)
		ret++;
	while (num / (ft_pow(base, ret)))
	{
		ret++;
	}
	return (ret + 1);
}

long unsigned int	ft_pow(unsigned int a, unsigned int b)
{
	long long unsigned int	ret;

	ret = 1;
	while (b--)
	{
		ret *= a;
	}
	return (ret);
}

size_t	ft_pstrlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s && s[count])
	{
		count++;
	}
	return (count);
}

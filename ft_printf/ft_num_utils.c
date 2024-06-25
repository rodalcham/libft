/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:48:42 by rchavez           #+#    #+#             */
/*   Updated: 2024/06/25 13:41:43 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numsize(int n)
{
	int	l;

	l = 1;
	if (n < 0)
		l++;
	while (n / 10)
	{
		l++;
		n /= 10;
	}
	return (l);
}

void	ft_numrev(char *str)
{
	int		i;
	int		l;
	char	c;

	i = 0;
	l = ft_pstrlen(str);
	if (str[0] == '-')
	{
		i++;
		l++;
	}
	while (i < l / 2)
	{
		c = str[i];
		str[i] = str[l - 1 - i];
		str[l - 1 - i] = c;
		i++;
	}
}

char	*ftp_itoa(int n)
{
	int			l;
	int			i;
	char		*str;
	long int	number;

	i = 0;
	l = ft_numsize(n);
	number = (long int)n;
	str = (char *)malloc(sizeof(char) * (l + 1));
	if (!str)
		return (NULL);
	if (number < 0)
	{
		str[i++] = '-';
		number *= -1;
		l--;
	}
	while (l--)
	{
		str[i++] = number % 10 + '0';
		number /= 10;
	}
	str[i] = '\0';
	ft_numrev(str);
	return (str);
}

char	*ft_uitoa(unsigned int number)
{
	int			l;
	int			i;
	char		*str;

	i = 0;
	l = numlen(number, 10);
	str = (char *)malloc(sizeof(char) * (l + 1));
	if (!str)
		return (NULL);
	str[--l] = '\0';
	while (--l >= 0)
	{
		str[i++] = number % 10 + '0';
		number /= 10;
	}
	ft_numrev(str);
	return (str);
}

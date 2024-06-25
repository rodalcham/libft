/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:47:37 by rchavez@stu       #+#    #+#             */
/*   Updated: 2024/03/13 13:15:38 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_voidcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s2;

	i = ft_strlen(s1) + 1;
	s2 = (char *)malloc((i) * sizeof(char));
	if (!s2)
		return (NULL);
	ft_voidcpy(s2, s1, i);
	return (s2);
}

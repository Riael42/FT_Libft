/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:32:33 by riael             #+#    #+#             */
/*   Updated: 2023/08/16 17:27:16 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dest;
	size_t	size;

	size = 0;
	if (s1)
		size += (size_t)ft_strlen((char *)s1);
	if (s2)
		size += (size_t)ft_strlen((char *)s2);
	dest = (char *)malloc(sizeof(char) * size + 1);
	if (dest == (void *)0)
		return ((void *)0);
	if (s1)
	{
		dest = ft_strcpy(dest, (char *)s1);
		free((char *)s1);
		ft_strcat(dest, s2);
	}
	else
		dest = ft_strcpy(dest, (char *)s2);
	return (dest);
}

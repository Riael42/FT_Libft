/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 20:28:18 by riael             #+#    #+#             */
/*   Updated: 2022/11/29 20:14:28 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static unsigned int	ft_strllen(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strllen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

static unsigned int	ft_strllen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i += 1;
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 20:30:04 by riael             #+#    #+#             */
/*   Updated: 2024/01/17 13:56:58 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static unsigned int	ft_strllen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	df;
	unsigned int	rdf;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i += 1;
	df = i;
	rdf = ft_strllen(src);
	if (size == 0 || size <= df)
		return (rdf + size);
	while (src[j] != '\0' && j < size - df - 1)
	{
		dest[i] = src[j];
		i += 1;
		j += 1;
	}
	dest[i] = '\0';
	return (df + rdf);
}

static unsigned int	ft_strllen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i += 1;
	return (i);
}

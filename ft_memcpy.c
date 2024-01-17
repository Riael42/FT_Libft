/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:13:07 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 22:43:50 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*s;
	char		*d;

	i = 0;
	s = src;
	d = dest;
	if (s == ((void *)0))
	{
		ft_printf("\n memcpy received NULL as dest, returning NULL \n");
		return ((void *)0);
	}
	if (d == ((void *)0))
	{
		ft_printf("\n memcpy received NULL as src, returning NULL \n");
		return ((void *)0);
	}
	while (i < n)
	{
		d[i] = s[i];
		i += 1;
	}
	return (dest);
}

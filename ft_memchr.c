/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:01:28 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 22:44:36 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*ptr;

	if (s == ((void *)0))
	{
		ft_printf("\n memchr received NULL as S, returning NULL \n");
		return ((void *)0);
	}
	i = 0;
	ptr = (unsigned char *)s;
	while (i < len)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)s + i);
		i += 1;
	}
	return ((void *)0);
}

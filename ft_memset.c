/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:27:53 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 22:46:36 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t		i;
	char		*s;

	if (ptr == ((void *)0))
	{
		ft_printf("\n memset received NULL as ptr, returning NULL \n");
		return ((void *)0);
	}
	i = 0;
	s = ptr;
	while (i < num)
	{
		s[i] = value;
		i += 1;
	}
	return (ptr);
}

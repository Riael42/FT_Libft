/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:02:36 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 23:06:24 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned int	i;
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	if (s1 == ((void *)0))
	{
		ft_printf("\n memcmp received NULL as s1, returning -1 \n");
		return (-1);
	}
	if (s2 == ((void *)0))
	{
		ft_printf("\n memcmp received NULL as s2, returning 1 \n");
		return (1);
	}
	i = 0;
	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	if (len == 0)
		return (0);
	while ((i < len - 1) && ptr_s1[i] == ptr_s2[i])
		i += 1;
	return ((int)(ptr_s1[i] - ptr_s2[i]));
}

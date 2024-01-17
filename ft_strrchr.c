/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:20:01 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 23:02:47 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	n;

	if (s == ((void *)0))
	{
		ft_printf("\n strrchr received a NULL, returning null \n");
		return ((void *)0);
	}
	n = ft_strlen((char *)s) + 1;
	while (n)
	{
		if (s[--n] == (char)c)
			return ((char *)s + n);
	}
	return ((void *)0);
}

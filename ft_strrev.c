/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:04:53 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 23:03:26 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrev(char *str)
{
	size_t	len;
	size_t	i;
	char	glass;

	if (str == ((void *)0))
	{
		ft_printf("\n strrev received NULL, returning NULL \n");
		return ((void *)0);
	}
	len = ft_strlen(str) - 1;
	i = 0;
	while (i < len)
	{
		glass = str[i];
		str[i] = str[len];
		str[len] = glass;
		i += 1;
		len -= 1;
	}
	return (str);
}

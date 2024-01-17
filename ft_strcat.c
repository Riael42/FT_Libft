/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:02:00 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 22:57:23 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	if (dest == ((void *)0))
	{
		ft_printf("\n strcat received NULL as dest, returning NULL \n");
		return ((void *)0);
	}
	if (src == ((void *)0))
	{
		ft_printf("\n strcat received NULL as src, returning dest \n");
		return (dest);
	}
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i += 1;
	while (src[j])
	{
		dest[i] = src[j];
		j += 1;
		i += 1;
	}
	dest[i] = '\0';
	return (dest);
}

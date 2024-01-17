/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:12:30 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 22:59:48 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	if (dest == ((void *)0))
	{
		ft_printf("\n strcpy received dest as NULL, returning NULL \n");
		return ((void *)0);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = '\0';
	return (dest);
}

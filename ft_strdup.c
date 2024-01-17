/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:27:47 by riael             #+#    #+#             */
/*   Updated: 2023/01/26 23:35:38 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dest;

	if (!s)
	{
		ft_printf("%s", "Received NULL In strdup, returning NULL");
		return ((void *)0);
	}
	i = ft_strlen((char *)s);
	dest = malloc(sizeof(*s) * i + 1);
	if (dest == ((void *)0))
		return ((void *)0);
	dest[i] = '\0';
	while (i > 0)
	{
		dest[i] = s[i];
		i -= 1;
	}
	dest[0] = s[0];
	return (dest);
}

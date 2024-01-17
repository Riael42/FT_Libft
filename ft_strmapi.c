/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:42:32 by riael             #+#    #+#             */
/*   Updated: 2022/11/29 20:16:41 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;

	if (s == (void *)0)
		return ((void *)0);
	dest = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (dest == ((void *)0))
		return ((void *)0);
	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = (*f)(i, (char)s[i]);
		i += 1;
	}
	dest[i] = '\0';
	return (dest);
}

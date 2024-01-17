/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:46:40 by riael             #+#    #+#             */
/*   Updated: 2022/11/29 20:16:08 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*dest;

	if (s == (void *)0)
		return ((void *)0);
	dest = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (dest == (void *)0)
		return ((void *)0);
	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = (*f)((char)s[i]);
		i += 1;
	}
	dest[i] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:29:56 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 23:05:36 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	if (s == (void *)0)
	{
		ft_printf("\n substr received NULL, returning NULL \n");
		return ((void *)0);
	}
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (dest == (void *)0)
		return ((void *)0);
	i = 0;
	while (s[i + start] != '\0' && i < len)
	{
		dest[i] = s[i + start];
		i += 1;
	}
	dest[i] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:57:23 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 22:58:15 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int thisisstupid)
{
	int		i;
	char	c;

	if (s == ((void *)0))
	{
		ft_printf("\n strchr received NULL, returning NULL \n");
		return ((void *)0);
	}
	c = (char)thisisstupid;
	i = -1;
	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (s[++i] != '\0')
		if (s[i] == c)
			return ((char *)(s + i));
	return ((void *)0);
}

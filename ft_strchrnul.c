/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrnul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:58:58 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 22:59:05 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchrnul(const char *s, int c)
{
	int	i;

	if (s == ((void *)0))
	{
		ft_printf("\n strchrnul received NULL, returning NULL \n");
		return ((void *)0);
	}
	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i += 1;
	return ((char *)s + i);
}

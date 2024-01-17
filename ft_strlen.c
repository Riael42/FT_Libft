/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:59:17 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 22:37:02 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (s == ((void *)0))
	{
		ft_printf("\n Strlen received NULL, returning 0 \n");
		return (0);
	}
	i = 0;
	while (s[i] != '\0')
		i += 1;
	return (i);
}

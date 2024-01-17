/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischars.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:56:41 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 22:39:25 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_ischars(char c, const char *charset)
{
	int	i;

	if (charset == ((void *)0))
	{
		ft_printf("\n ischars received a NULL, returning 0 \n");
		return (0);
	}
	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i += 1;
	}
	return (0);
}

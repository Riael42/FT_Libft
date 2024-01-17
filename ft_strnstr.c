/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:04:27 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 23:05:18 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_strnstr_error(const char *big, const char *little)
{
	if (big == ((void *)0))
	{
		ft_printf("\n strnstr received NULL as big, returning NULL \n");
		return (-1);
	}
	if (little == ((void *)0))
	{
		ft_printf("\n strnstr received NULL as little, returning NULL \n");
		return (-1);
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strnstr_error(big, little) == -1)
		return ((void *)0);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (little[j] && big[i + j] && (big[i + j] == little[j])
			&& (i + j) < len)
		{
			if (j == ((size_t)ft_strlen((char *)little) - 1))
				return ((char *)&big[i]);
			j += 1;
		}
		j = 0;
		i += 1;
	}
	return ((void *)0);
}

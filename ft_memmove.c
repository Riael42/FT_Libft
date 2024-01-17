/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:39:26 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 22:42:39 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	*ft_memmove_body(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst == ((void *)0))
	{
		ft_printf("\n memmove received NULL as dst, returning NULL \n");
		return ((void *)0);
	}
	if (src == ((void *)0))
	{
		ft_printf("\n memmove received NULL as src, returning NULL \n");
		return ((void *)0);
	}
	return (ft_memmove_body(dst, src, n));
}

static void	*ft_memmove_body(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (dst > src)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n -= 1;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i += 1;
		}
	}
	return (dst);
}

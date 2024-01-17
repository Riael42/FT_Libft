/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 21:56:59 by riael             #+#    #+#             */
/*   Updated: 2022/12/03 17:07:52 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_voidcheck(void *p);

int	ft_putpointer(void *p)
{
	size_t			n;
	int				i;
	int				k;
	char			buf[17];

	if (ft_voidcheck(p) != 0)
		return (5);
	n = (size_t)p;
	i = 16;
	k = -1;
	while (n > 0)
	{
		buf[i] = "0123456789abcdef"[n % 16];
		i -= 1;
		n = n / 16;
	}
	while (i < 16)
	{
		i += 1;
		buf[++k] = buf[i];
	}
	buf[k + 1] = 0;
	ft_putstr("0x");
	ft_putstr(buf);
	return (2 + ft_strlen(buf));
}

static int	ft_voidcheck(void *p)
{
	if (p == ((void *)0))
	{
		ft_putstr("(nil)");
		return (5);
	}
	return (0);
}

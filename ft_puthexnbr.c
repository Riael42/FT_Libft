/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 21:56:26 by riael             #+#    #+#             */
/*   Updated: 2022/12/03 17:27:20 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_save_one_line(void);

int	ft_puthexnbr(unsigned int n, int type)
{
	int		i;
	int		k;
	char	outbuf[16];

	i = 12;
	k = 0;
	if (n == 0)
		return (ft_save_one_line());
	while (n > 0)
	{
		if (type == 2)
			outbuf[i] = "0123456789ABCDEF"[n % 16];
		if (type == 1)
			outbuf[i] = "0123456789abcdef"[n % 16];
		i -= 1;
		n = n / 16;
	}
	while (++i < 13)
	{
		outbuf[k++] = outbuf[i];
	}
	outbuf[k] = 0;
	i = ft_strlen(outbuf);
	return (write(1, &outbuf, i));
}

static int	ft_save_one_line(void)
{
	ft_putchar('0');
	return (1);
}

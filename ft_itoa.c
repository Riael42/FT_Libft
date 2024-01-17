/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:37:06 by riael             #+#    #+#             */
/*   Updated: 2022/11/29 20:14:15 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_itoa_len(int n);
static char	ft_itoa_getchar(int n);

char	*ft_itoa(int n)
{
	int		size;
	char	*final;

	size = ft_itoa_len(n);
	final = (char *)malloc(sizeof(char) * size + 1);
	if (final == (void *)0)
		return ((void *)0);
	final[size] = '\0';
	if (n == 0)
		final[0] = '0';
	if (n < 0)
		final[0] = '-';
	while (n != 0)
	{
		size -= 1;
		final[size] = ft_itoa_getchar(n % 10);
		n = n / 10;
	}
	return (final);
}

static char	ft_itoa_getchar(int n)
{
	char	c;

	c = n * (1 - 2 * (n < 0)) + '0';
	return (c);
}

static int	ft_itoa_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len += 1;
	}
	return (len);
}

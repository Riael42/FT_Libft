/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:31:32 by riael             #+#    #+#             */
/*   Updated: 2022/12/03 14:16:24 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_printf_complexflags(va_list ap, int *j, char *alist);
static void	ft_printf_strings(va_list ap, int *j);

int	ft_printf_flag(va_list ap, int *j, char *alist)
{
	if (j[0] <= alist[0])
	{
		if (ft_ischars(alist[j[0]], "sdiu"))
			return (ft_printf_complexflags(ap, j, alist));
		if (alist[j[0]] == 'c')
		{
			ft_putchar(va_arg(ap, int));
			j[1] += 1;
		}
		if (alist[j[0]] == '%')
		{
			ft_putchar('%');
			j[1] += 1;
		}
		if (alist[j[0]] == 'x')
			j[1] += ft_puthexnbr(va_arg(ap, unsigned int), 1);
		if (alist[j[0]] == 'X')
			j[1] += ft_puthexnbr(va_arg(ap, unsigned int), 2);
		if (alist[j[0]] == 'p')
			j[1] += ft_putpointer(va_arg(ap, void *));
		j[0] += 1;
	}
	return (j[0]);
}

static int	ft_printf_complexflags(va_list ap, int *j, char *alist)
{
	int				i;
	unsigned int	u;

	if (alist[j[0]] == 'd' || alist[j[0]] == 'i')
	{
		i = va_arg(ap, int);
		ft_putnbr(i);
		j[1] += ft_countdigits(i);
		if (i == 0 || i < 0)
			j[1] += 1;
	}
	if (alist[j[0]] == 's')
		ft_printf_strings(ap, j);
	if (alist[j[0]] == 'u')
	{
		u = va_arg(ap, unsigned int);
		ft_putunbr(u);
		j[1] += ft_countudigits(u);
		if (u == 0)
			j[1] += 1;
	}
	j[0] += 1;
	return (j[0]);
}

void	ft_printf_strings(va_list ap, int *j)
{
	char	*s;

	s = va_arg(ap, char *);
	if (!s)
	{
		ft_putstr("(null)");
		j[1] += 6;
		return ;
	}
	ft_putstr(s);
	j[1] += ft_strlen(s);
}

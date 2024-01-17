/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:54:49 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 22:30:06 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_pass_word(const char *str, int i);

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	char	*alist;
	int		i;
	int		j[2];

	if (!str || str[0] == '\0')
		return (0);
	va_start(ap, str);
	alist = ft_get_args(str);
	i = 0;
	j[0] = 1;
	j[1] = 0;
	while (str[i] != '\0')
	{
		i = ft_pass_word(str, i);
		j[0] = ft_printf_flag(ap, j, alist);
		i += 2 * (str[i] == '%');
	}
	va_end(ap);
	j[0] = (int)alist[0];
	free(alist);
	return (ft_calc_printed_bytes(str, j));
}

static int	ft_pass_word(const char *str, int i)
{
	int	wordsize;
	int	safety;

	wordsize = 0;
	safety = 0;
	while (str[i] != '\0' && safety == 0)
	{
		if (str[i] == '%' && !(ft_ischars(str[i + 1], "cspdiuxX%")))
		{
			i += 1;
			wordsize += 1;
		}
		if (str[i] == '%' && ft_ischars(str[i + 1], "cspdiuxX%"))
		{
			safety = 42;
		}
		else
		{
			i += 1;
			wordsize += 1;
		}
	}
	wordsize = ft_printf_word(str, i, wordsize);
	return (i);
}

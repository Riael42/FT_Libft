/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:57:45 by riael             #+#    #+#             */
/*   Updated: 2022/12/03 21:34:17 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_initial_check(const char *str, char *alist);

char	*ft_get_args(const char *str)
{
	size_t	i;
	int		curr;
	char	*alist;

	alist = malloc(sizeof(int) * 1);
	if (ft_initial_check(str, alist))
		return ((void *)0);
	curr = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && ft_ischars(str[i + 1], "cspdiuxX%"))
		{
			i += 1;
			alist[0] += 1;
			alist = ft_realloc(alist, curr + 1);
			alist[curr] = str[i];
			curr += 1;
		}
		i += 1;
	}
	return (alist);
}

static int	ft_initial_check(const char *str, char *alist)
{
	if (str == ((void *)0) || str[0] == '\0' || alist == (void *)0)
		return (1);
	alist[0] = 0;
	return (0);
}

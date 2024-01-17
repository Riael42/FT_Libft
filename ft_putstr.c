/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:53:15 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 22:50:16 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr(const char *str)
{
	int	i;

	if (str == ((void *)0))
	{
		ft_printf("\n putstr received NULL, not running \n");
		return ;
	}
	i = 0;
	while (str[i] != '\0')
		i += 1;
	write(1, str, i);
}

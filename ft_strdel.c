/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:03:02 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 23:05:28 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_strdel(char **s)
{
	if (s == ((void *)0))
	{
		ft_printf("\n strdel received NULL, not running \n");
		return ;
	}
	free(s);
	*s = (void *)0;
}

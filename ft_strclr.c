/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:23:39 by riael             #+#    #+#             */
/*   Updated: 2022/12/24 22:51:29 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	if (s == (void *)0)
	{
		ft_printf("\n strclr received NULL, doing nothing \n");
		return ;
	}
	while (s[i] != '\0')
	{
		s[i] = '\0';
		i += 1;
	}
}

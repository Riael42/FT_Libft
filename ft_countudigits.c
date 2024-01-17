/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countudigits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 22:49:45 by riael             #+#    #+#             */
/*   Updated: 2022/12/03 13:28:00 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_countudigits(unsigned int i)
{
	int	j;

	j = 0;
	while (i != 0)
	{
		j += 1;
		i = i / 10;
	}
	return (j);
}

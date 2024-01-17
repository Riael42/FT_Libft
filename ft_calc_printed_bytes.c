/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_printed_bytes.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:43:03 by riael             #+#    #+#             */
/*   Updated: 2022/12/03 21:34:25 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_calc_printed_bytes(const char *str, int *j)
{
	int	i;
	int	total;

	i = 0;
	total = (j[1] * (j[0] != 0));
	while (str[i] != '\0')
		i += 1;
	total += i;
	total -= (j[0] * 2);
	return (total);
}

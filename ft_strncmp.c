/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 20:37:42 by riael             #+#    #+#             */
/*   Updated: 2022/11/29 23:28:41 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	if (n >= 1)
		n -= 1;
	i = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[i]
		&& i < n && (unsigned char)s1[i] != '\0')
		i += 1;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

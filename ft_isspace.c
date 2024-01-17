/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:53:23 by riael             #+#    #+#             */
/*   Updated: 2022/11/29 20:05:04 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//usage: ft_isspace(c, 1): space (' ') to be used in normal text
// isspace(c, 2) space, tabs, or newlines to be used for 42 strings
// isspace(c, 3) checks for all whitespaces, usage in atoi

int	ft_isspace(char c, int type)
{
	if (type == 1)
		return (c == ' ');
	if (type == 2)
		return (c == ' ' || c == '\t' || c == '\n');
	if (type == 3)
		return (c == ' ' || c == '\f' || c == '\n' || c == '\r'
			|| c == '\t' || c == '\v');
	return (0);
}

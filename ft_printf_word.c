/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_word.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:16:06 by riael             #+#    #+#             */
/*   Updated: 2022/12/03 21:19:53 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_printf_word(const char *str, size_t i, int wordsize)
{
	char	*word;

	if (wordsize > 0)
	{
		word = ft_substr(str, i - wordsize, wordsize);
		ft_putstr(word);
		free(word);
	}
	return (0);
}
